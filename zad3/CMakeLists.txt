

add_executable(zad3 main.cpp zad3.cpp)
add_executable(zad3_tests test.cpp zad3.cpp)

target_link_libraries(zad3_tests PRIVATE Catch2::Catch2WithMain)

add_test(NAME zad3_tests COMMAND zad3_tests)