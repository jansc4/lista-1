/*
 * @author Jan Nowak
 * https://github.com/catchorg/Catch2
 * https://www.jetbrains.com/help/clion/unit-testing-tutorial.html#clion-integrations
 * https://github.com/catchorg/Catch2/blob/devel/docs/cmake-integration.md#installing-catch2-from-git-repository
 * chatGPT - pomoc w nauce
 */

#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include "zad4.h"

TEST_CASE("Fibonacci Iteracyjnie - przypadki brzegowe", "[fibonaciIter]") {
REQUIRE(fibonaciIter(0) == 0);
REQUIRE(fibonaciIter(1) == 1);
}

TEST_CASE("Fibonacci Iteracyjnie - przypadki ogólne", "[fibonaciIter]") {
REQUIRE(fibonaciIter(2) == 1);
REQUIRE(fibonaciIter(3) == 2);
REQUIRE(fibonaciIter(4) == 3);
REQUIRE(fibonaciIter(5) == 5);
REQUIRE(fibonaciIter(10) == 55);
}

TEST_CASE("Fibonacci Iteracyjnie - przypadek ujemny", "[fibonaciIter]") {
REQUIRE_THROWS_AS(fibonaciIter(-1), std::invalid_argument);
}

TEST_CASE("Fibonacci Rekurencyjnie - przypadki brzegowe", "[fibonaciRek]") {
REQUIRE(fibonaciRek(0) == 0);
REQUIRE(fibonaciRek(1) == 1);
}

TEST_CASE("Fibonacci Rekurencyjnie - przypadki ogólne", "[fibonaciRek]") {
REQUIRE(fibonaciRek(2) == 1);
REQUIRE(fibonaciRek(3) == 2);
REQUIRE(fibonaciRek(4) == 3);
REQUIRE(fibonaciRek(5) == 5);
REQUIRE(fibonaciRek(10) == 55);
}

TEST_CASE("Fibonacci Rekurencyjnie - przypadek ujemny", "[fibonaciRek]") {
REQUIRE_THROWS_AS(fibonaciRek(-1), std::invalid_argument);
}

