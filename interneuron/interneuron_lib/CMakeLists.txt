cmake_minimum_required(VERSION 3.5)

project(interneuron_lib)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

if(${INTERNEURON})
  add_compile_options(-DINTERNEURON)
endif()

find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()

include_directories(include ${CMAKE_CURRENT_BINARY_DIR}/include)

set(${PROJECT_NAME}_SRCS
"src/interneuron_monitor.cpp"
)

ament_auto_add_library(${PROJECT_NAME} SHARED
  ${${PROJECT_NAME}_SRCS}
)
ament_target_dependencies(
  ${PROJECT_NAME} "rclcpp" "interneuron_msgs"
)

ament_auto_package()

#install(
#  TARGETS ${PROJECT_NAME}_lib
#  EXPORT ${PROJECT_NAME}_lib
#  ARCHIVE DESTINATION lib
#  LIBRARY DESTINATION lib
#  RUNTIME DESTINATION bin
#  INCLUDES DESTINATION include
#)

#install(DIRECTORY include/ ${CMAKE_CURRENT_BINARY_DIR}/include/
#  DESTINATION include/${PROJECT_NAME}_lib)