
add_executable(test test.cpp)


target_link_libraries(test geometry_shapes  ${OpenCV_LIBS})
