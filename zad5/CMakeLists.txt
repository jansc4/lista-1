

add_executable(zad5 main.cpp zad5.cpp)
add_executable(zad5_tests test.cpp zad5.cpp)

target_link_libraries(zad5_tests PRIVATE Catch2::Catch2WithMain)

add_test(NAME zad5_tests COMMAND zad5_tests)