import sys


import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts


class MinimalClientAsync(Node):


    def __init__(self):
        super().__init__('minimal_client')


        self.cli = self.create_client(
            AddTwoInts,
            'add_two_ints'
        )


    def send_request(self, a, b):
        while not self.cli.wait_for_service(
            timeout_sec=1.0
        ):
            self.get_logger().info(
                'Service not available, waiting...'
            )


        request = AddTwoInts.Request()
        request.a = a
        request.b = b


        return self.cli.call_async(request)


def main(args=None):
    rclpy.init(args=args)


    node = MinimalClientAsync()


    try:
        if len(sys.argv) != 3:
            print('Usage: client_member_function.py A B')
            return


        a = int(sys.argv[1])
        b = int(sys.argv[2])


        future = node.send_request(a, b)
        rclpy.spin_until_future_complete(node, future)


        if future.result() is not None:
            response = future.result()
            node.get_logger().info(
                f'Result: {a} + {b} = {response.sum}'
            )
        else:
            node.get_logger().error(
                f'Service call failed: {future.exception()}'
            )


    except ValueError:
        print('Please enter two integers.')
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
