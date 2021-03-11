cmake_minimum_required(VERSION 3.5)
project(variant_topic_tools)

find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()

### Compile options
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
  set(CMAKE_CXX_EXTENSIONS OFF)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic -Wno-unused-parameter -Werror)
endif()

ament_auto_add_library(variant_topic_tools_node SHARED src/sample_node.cpp)

rclcpp_components_register_node(variant_topic_tools_node
  PLUGIN "VariantTopicTools"
  EXECUTABLE variant_topic_tools
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_auto_package()
