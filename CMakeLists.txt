cmake_minimum_required(VERSION 3.15)
project(MyVeneriXGame LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(glm REQUIRED)
find_package(imgui CONFIG REQUIRED)
find_package(glfw3 REQUIRED)

set(SDK_DIR "${CMAKE_CURRENT_SOURCE_DIR}/VeneriX_SDK")

add_executable(MyGame App.cpp)

target_include_directories(MyGame PRIVATE "${SDK_DIR}/include")
target_link_directories(MyGame PRIVATE "${SDK_DIR}/lib")
target_link_libraries(MyGame PRIVATE venerix glm::glm imgui::imgui glfw)

# Copy required DLLs next to the executable after each build
add_custom_command(TARGET MyGame POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${SDK_DIR}/bin/venerix.dll"
        $<TARGET_FILE_DIR:MyGame>
)
