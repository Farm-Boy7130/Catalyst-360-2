# CMakeList.txt : CMake project for Catalyst 360 Test, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Catalyst 360 Test")

# Add source to this project's executable.
add_executable (Catalyst360 "assets/cpp/MainHandler.cpp" "assets/headers/MainHandler.h" "assets/cpp/DC22.cpp" "assets/headers/DC22.h" "assets/cpp/DC23.cpp" "assets/headers/DC23.h" "assets/headers/Inventory.h" "assets/cpp/IV.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Catalyst360 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

# Specify the name of your icon file
set(ICON_FILE "Icon.ico")

# Add a custom command to generate the resource file
add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/resource.rc
    COMMAND echo IDI_APPLICATION ICON \"${CMAKE_CURRENT_LIST_DIR}/${ICON_FILE}\" > ${CMAKE_CURRENT_BINARY_DIR}/resource.rc
    DEPENDS ${CMAKE_CURRENT_LIST_DIR}/${ICON_FILE}
)

# Add a custom target to include the resource file in the build
add_custom_target(MyProjectResources DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/resource.rc)

# Add your C++ executable target
add_executable(MyProject ../cpp/MainHandler.cpp)

# Link the executable target with the resource file
add_dependencies(MyProject MyProjectResources)
