import rclpy
from rclpy.node import Node


from battery_interfaces.srv import GetBatteryStatus


class BatteryServer(Node):


    def __init__(self):
        super().__init__('battery_server')


        self.srv = self.create_service(
            GetBatteryStatus,
            'get_battery_status',
            self.battery_callback
        )


        self.get_logger().info(
            'Battery status service is ready.'
        )


    def battery_callback(self, request, response):
        # Example data only: not a real battery sensor.
        response.voltage = 12.4


        if not request.refresh:
            response.status = 'CACHED'
        elif response.voltage >= 12.0:
            response.status = 'NORMAL'
        elif response.voltage >= 11.0:
            response.status = 'LOW'
        else:
            response.status = 'CRITICAL'


        self.get_logger().info(
            f'Voltage: {response.voltage} V, '
            f'Status: {response.status}'
        )


        return response


def main(args=None):
    rclpy.init(args=args)
    node = BatteryServer()


    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
