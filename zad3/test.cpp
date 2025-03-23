/*
 * @author Jan Nowak
 * https://github.com/catchorg/Catch2
 * https://www.jetbrains.com/help/clion/unit-testing-tutorial.html#clion-integrations
 * https://github.com/catchorg/Catch2/blob/devel/docs/cmake-integration.md#installing-catch2-from-git-repository
 * chatGPT - pomoc w nauce
 */

#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include "zad3.h"

TEST_CASE("Podzbiory - przypadek pustej listy", "[podzbiory]") {
vector<char> empty;
REQUIRE_THROWS_AS(podzbiory(empty), std::invalid_argument);
}

TEST_CASE("Podzbiory - zbiór jednoelementowy", "[podzbiory]") {
vector<char> input = {'A'};
vector<vector<char>> expected = {{}, {'A'}};
REQUIRE(podzbiory(input) == expected);
}

TEST_CASE("Podzbiory - zbiór dwuelementowy", "[podzbiory]") {
vector<char> input = {'A', 'B'};
vector<vector<char>> expected = {{}, {'A'}, {'B'}, {'A', 'B'}};
REQUIRE(podzbiory(input) == expected);
}

TEST_CASE("Podzbiory - zbiór trzyelementowy", "[podzbiory]") {
vector<char> input = {'A', 'B', 'C'};
vector<vector<char>> expected = {{}, {'A'}, {'B'}, {'A', 'B'}, {'C'}, {'A', 'C'}, {'B', 'C'}, {'A', 'B', 'C'}};
REQUIRE(podzbiory(input) == expected);
}
