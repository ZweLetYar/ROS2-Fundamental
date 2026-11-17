import rclpy
from rclpy.node import Node


from battery_interfaces.srv import GetBatteryStatus


class BatteryClient(Node):


    def __init__(self):
        super().__init__('battery_client')


        self.client = self.create_client(
            GetBatteryStatus,   #interface
            'get_battery_status' #service name
        )


    def send_request(self, refresh=True):
        while not self.client.wait_for_service(
            timeout_sec=1.0
        ):
            self.get_logger().info(
                'Waiting for battery service...'
            )


        request = GetBatteryStatus.Request()
        request.refresh = refresh


        return self.client.call_async(request)


def main(args=None):
    rclpy.init(args=args)
    node = BatteryClient()


    try:
        future = node.send_request(refresh=True)


        rclpy.spin_until_future_complete(node, future)


        if future.result() is not None:
            response = future.result()


            node.get_logger().info(
                f'Battery voltage: {response.voltage:.2f} V'
            )
            node.get_logger().info(
                f'Battery status: {response.status}'
            )
        else:
            node.get_logger().error(
                f'Service failed: {future.exception()}'
            )


    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
