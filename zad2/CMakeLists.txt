
add_executable(zad2 main.cpp zad2.cpp)
add_executable(zad2_tests test.cpp zad2.cpp)

target_link_libraries(zad2_tests PRIVATE Catch2::Catch2WithMain)

add_test(NAME zad2_tests COMMAND zad2_tests)