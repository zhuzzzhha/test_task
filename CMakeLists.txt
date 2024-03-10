cmake_minimum_required(VERSION 3.0)
project(GeometricShapes)

set(VCPKG_ROOT "Вставьте путь до vcpkg")
set(VCPKG_INSTALLED_DIR "${VCPKG_ROOT}/installed")

set(CMAKE_TOOLCHAIN_FILE "${VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")
list(APPEND CMAKE_PREFIX_PATH "${VCPKG_ROOT}/installed")

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "cmake")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_CURRENT_SOURCE_DIR}/bin.dbg)


set(OpenCV_DIR "${VCPKG_ROOT}/installed/x64-windows/share/opencv4")
set(Protobuf_DIR "${VCPKG_ROOT}/installed/x64-windows/share/protobuf")
set(quirc_DIR "${VCPKG_ROOT}/installed/x64-windows/share/quirc")
set(TIFF_INCLUDE_DIR "${VCPKG_ROOT}/installed/x64-windows/include/tiff")
set(TIFF_LIBRARY "${VCPKG_ROOT}/installed/x64-windows/lib/tiff")

find_package(OpenCV CONFIG REQUIRED)

# Создание цели библиотеки
add_library(geometry_shapes STATIC
    src/triangle.cpp
    src/circle.cpp
    src/rectangle.cpp
    src/shape.cpp

)

# Указание пути для заголовочных файлов
target_include_directories(geometry_shapes PUBLIC include opencv_core opencv_imgproc opencv_highgui)

add_subdirectory(tests)
install(TARGETS test DESTINATION .)

