set(GTEST_SHUFFLE 1)

add_executable(
    cpp-test
    main.cpp
    test.cpp
)

include_directories(
    ${CMAKE_SOURCE_DIR}/include
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/app)

target_link_libraries(cpp-test PRIVATE app)


target_include_directories(cpp-test PUBLIC ../vendor/googletest/googletest/include)
target_link_libraries(cpp-test PUBLIC gtest)
