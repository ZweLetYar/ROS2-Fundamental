import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient


from robot_task_interfaces.action import MoveDistance




class MoveDistanceCancelClient(Node):


   def __init__(self):
       super().__init__('move_distance_cancel_client')


       self._action_client = ActionClient(
           self,
           MoveDistance,
           'move_distance'
       )


   def send_goal(self, distance, speed):
       goal_msg = MoveDistance.Goal()
       goal_msg.distance_m = float(distance)
       goal_msg.speed_mps = float(speed)


       self.get_logger().info('Waiting for Action Server...')
       self._action_client.wait_for_server()


       self.get_logger().info(
           f'Sending goal: {distance} m at {speed} m/s'
       )


       future = self._action_client.send_goal_async(
           goal_msg,
           feedback_callback=self.feedback_callback
       )
       future.add_done_callback(self.goal_response_callback)


   def feedback_callback(self, feedback_msg):
       feedback = feedback_msg.feedback


       self.get_logger().info(
           f'Feedback: {feedback.percent_complete:.1f}% complete, '
           f'{feedback.distance_remaining_m:.2f} m remaining'
       )


   def goal_response_callback(self, future):
       goal_handle = future.result()


       if not goal_handle.accepted:
           self.get_logger().error('Goal was rejected.')
           rclpy.shutdown()
           return


       self.get_logger().info('Goal accepted by server.')


       # Cancel after 2 seconds.
       self.cancel_timer = self.create_timer(
           2.0,
           lambda: self.cancel_goal(goal_handle)
       )


       result_future = goal_handle.get_result_async()
       result_future.add_done_callback(self.result_callback)


   def cancel_goal(self, goal_handle):
       # Prevent this timer from sending repeated cancel requests.
       self.cancel_timer.cancel()


       self.get_logger().warn('Sending cancel request...')


       future = goal_handle.cancel_goal_async()
       future.add_done_callback(self.cancel_response_callback)


   def cancel_response_callback(self, future):
       cancel_response = future.result()


       if len(cancel_response.goals_canceling) > 0:
           self.get_logger().info('Cancel request accepted.')
       else:
           self.get_logger().warn(
               'Cancel request was not accepted or goal already finished.'
           )


   def result_callback(self, future):
       wrapped_result = future.result()
       result = wrapped_result.result


       self.get_logger().info(
           f'Final status: {wrapped_result.status}'
       )
       self.get_logger().info(f'Success: {result.success}')
       self.get_logger().info(
           f'Distance traveled: {result.distance_traveled_m:.2f} m'
       )
       self.get_logger().info(f'Message: {result.message}')


       rclpy.shutdown()




def main(args=None):
   rclpy.init(args=args)
   node = MoveDistanceCancelClient()


   try:
       node.send_goal(distance=5.0, speed=1)
       rclpy.spin(node)
   except KeyboardInterrupt:
       pass
   finally:
       if rclpy.ok():
           rclpy.shutdown()
       node.destroy_node()




if __name__ == '__main__':
   main()
