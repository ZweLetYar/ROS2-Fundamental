from setuptools import find_packages, setup


package_name = 'robot_task_py'


setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        (
            'share/ament_index/resource_index/packages',
            ['resource/' + package_name],
        ),
        (
            'share/' + package_name,
            ['package.xml'],
        ),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='User',
    maintainer_email='user@example.com',
    description='Python ROS 2 Action Server and Client',
    license='Apache-2.0',
    entry_points={
        'console_scripts': [
            'action_server = robot_task_py.action_server:main',
            'action_client = robot_task_py.action_client:main',
        ],
    },
)
