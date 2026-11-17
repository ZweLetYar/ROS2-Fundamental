# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target battery_interfaces::battery_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${battery_interfaces_TARGETS}.
if(battery_interfaces_TARGETS AND NOT TARGET battery_interfaces::battery_interfaces)
  add_library(battery_interfaces::battery_interfaces INTERFACE IMPORTED)
  set_target_properties(battery_interfaces::battery_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${battery_interfaces_TARGETS}")
endif()
