

add_executable(zad6 main.cpp zad6.cpp)
add_executable(zad6_tests test.cpp zad6.cpp)

target_link_libraries(zad6_tests PRIVATE Catch2::Catch2WithMain)

add_test(NAME zad6_tests COMMAND zad6_tests)