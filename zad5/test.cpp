/*
 * @author Jan Nowak
 * https://github.com/catchorg/Catch2
 * https://www.jetbrains.com/help/clion/unit-testing-tutorial.html#clion-integrations
 * https://github.com/catchorg/Catch2/blob/devel/docs/cmake-integration.md#installing-catch2-from-git-repository
 * chatGPT - pomoc w nauce
 */

#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include "zad5.h"

TEST_CASE("Collatz - przypadek liczby ujemnej", "[collatz]") {
REQUIRE_THROWS_AS(collatz(-5), std::invalid_argument);
}

TEST_CASE("Collatz - przypadek zera", "[collatz]") {
REQUIRE_THROWS_AS(collatz(0), std::invalid_argument);
}

TEST_CASE("Collatz - liczba 1", "[collatz]") {
vector<int> expected = {1};
REQUIRE(collatz(1) == expected);
}

TEST_CASE("Collatz - liczba parzysta", "[collatz]") {
vector<int> expected = {6, 3, 10, 5, 16, 8, 4, 2, 1};
REQUIRE(collatz(6) == expected);
}

TEST_CASE("Collatz - liczba nieparzysta", "[collatz]") {
vector<int> expected = {7, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1};
REQUIRE(collatz(7) == expected);
}

TEST_CASE("Collatz - duża liczba", "[collatz]") {
vector<int> result = collatz(27);
REQUIRE(result.back() == 1); // Sekwencja powinna kończyć się na 1
}
