

# Tworzymy plik wykonywalny dla zadania 1
add_executable(zad1 main.cpp zad1.cpp)
add_executable(zad1_tests test.cpp zad1.cpp)

# Linkowanie testów do Catch2
target_link_libraries(zad1_tests PRIVATE Catch2::Catch2WithMain)

# Rejestracja testów w CMake
add_test(NAME zad1_tests COMMAND zad1_tests)