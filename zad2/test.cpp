/*
 * @author Jan Nowak
 * https://github.com/catchorg/Catch2
 * https://www.jetbrains.com/help/clion/unit-testing-tutorial.html#clion-integrations
 * https://github.com/catchorg/Catch2/blob/devel/docs/cmake-integration.md#installing-catch2-from-git-repository
 * chatGPT - pomoc w nauce
 */

#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include "zad2.h"
#include <vector>

using namespace std;

TEST_CASE("Wspólne elementy - poprawne przypadki", "[wspolne]") {
REQUIRE(wspolne({1, 2, 3}, {3, 4, 5}) == vector<int>{3});
REQUIRE(wspolne({1, 2, 2, 3}, {2, 2, 3, 3}) == vector<int>{2, 2, 3});
REQUIRE(wspolne({5, 5, 5, 1}, {5, 5, 2, 3}) == vector<int>{5, 5});
}

TEST_CASE("Brak wspólnych elementów", "[wspolne]") {
REQUIRE(wspolne({1, 2, 3}, {4, 5, 6}) == vector<int>{});
REQUIRE(wspolne({7, 8, 9}, {10, 11, 12}) == vector<int>{});
}

TEST_CASE("Obsługa pustych wektorów - wyjątek", "[wspolne]") {
REQUIRE_THROWS_AS(wspolne({}, {1, 2, 3}), std::invalid_argument);
REQUIRE_THROWS_AS(wspolne({1, 2, 3}, {}), std::invalid_argument);
REQUIRE_THROWS_AS(wspolne({}, {}), std::invalid_argument);
}
