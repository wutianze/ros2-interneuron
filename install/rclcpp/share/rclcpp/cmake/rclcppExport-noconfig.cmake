#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rclcpp::rclcpp" for configuration ""
set_property(TARGET rclcpp::rclcpp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(rclcpp::rclcpp PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/librclcpp.so"
  IMPORTED_SONAME_NOCONFIG "librclcpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rclcpp::rclcpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_rclcpp::rclcpp "${_IMPORT_PREFIX}/lib/librclcpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
