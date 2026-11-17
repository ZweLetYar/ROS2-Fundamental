import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, CancelResponse, GoalResponse


from rclpy.executors import MultiThreadedExecutor


from robot_task_interfaces.action import MoveDistance


class MoveDistanceActionServer(Node):


   def __init__(self):
       super().__init__('move_distance_action_server')


       self._action_server = ActionServer(
           self,
           MoveDistance,
           'move_distance',
           execute_callback=self.execute_callback,
           goal_callback=self.goal_callback,
           cancel_callback=self.cancel_callback,
          
       )


       self.get_logger().info(
           'MoveDistance Action Server is ready.'
       )


   def goal_callback(self, goal_request):
       distance = goal_request.distance_m
       speed = goal_request.speed_mps


       if distance <= 0.0 or speed <= 0.0:
           self.get_logger().warn(
               'Rejecting goal: distance and speed must be positive.'
           )
           return GoalResponse.REJECT


       self.get_logger().info(
           f'Accepted request: distance={distance:.2f} m, '
           f'speed={speed:.2f} m/s'
       )
       return GoalResponse.ACCEPT


   def cancel_callback(self, goal_handle):
       self.get_logger().info('Cancel request received.')
       return CancelResponse.ACCEPT






   def execute_callback(self, goal_handle):
       goal = goal_handle.request


       total_distance = float(goal.distance_m)
       speed = float(goal.speed_mps)


       elapsed = 0.0
       distance_traveled = 0.0
       dt = 0.2


       feedback_msg = MoveDistance.Feedback()
       result = MoveDistance.Result()


       self.get_logger().info('Starting simulated movement.')
      


       while distance_traveled < total_distance:  


           if goal_handle.is_cancel_requested:
               goal_handle.canceled()


               result.success = False
               result.distance_traveled_m = distance_traveled
               result.message = 'Goal canceled by client.'


               self.get_logger().warn(
                   f'Canceled at {distance_traveled:.2f} m'
               )
               return result


           time.sleep(dt)
           elapsed += dt


           distance_traveled = min(
               speed * elapsed,
               total_distance
           )


           # Calculate feedback
           feedback_msg.distance_remaining_m = max(
               0.0,
               total_distance - distance_traveled
           )


           feedback_msg.percent_complete = min(
               100.0,
               (distance_traveled / total_distance) * 100.0
           )


           # Publish feedback once for this iteration
           goal_handle.publish_feedback(feedback_msg)


           self.get_logger().info(
              
               f'{feedback_msg.percent_complete:.1f}% | '
               f'Remaining: {feedback_msg.distance_remaining_m:.2f} m'
           )




       goal_handle.succeed()


       result.success = True
       result.distance_traveled_m = distance_traveled
       result.message = 'Simulated movement completed successfully.'


       self.get_logger().info('Goal completed successfully.')
       return result








def main(args=None):
   rclpy.init(args=args)


   node = MoveDistanceActionServer()
   executor = MultiThreadedExecutor(num_threads=2)
   executor.add_node(node)


   try:
       executor.spin()
   except KeyboardInterrupt:
       pass
   finally:
       executor.shutdown()
       node.destroy_node()
       rclpy.shutdown()




if __name__ == '__main__':
   main()
