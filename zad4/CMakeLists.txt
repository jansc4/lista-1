

add_executable(zad4 main.cpp zad4.cpp)
add_executable(zad4_tests test.cpp zad4.cpp)

target_link_libraries(zad4_tests PRIVATE Catch2::Catch2WithMain)

add_test(NAME zad4_tests COMMAND zad4_tests)