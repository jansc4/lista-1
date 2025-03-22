//
// Created by jan on 18.03.2025.
//
#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include "zad1.h"

// Test poprawnych wartości
TEST_CASE("Poprawne wartości - heron", "[heron]") {
    REQUIRE(heron(3, 4, 5) == Catch::Approx(6.0).margin(0.001));  // Przykład trójkąta prostokątnego
    REQUIRE(heron(5, 12, 13) == Catch::Approx(30.0).margin(0.001));
    REQUIRE(heron(7, 8, 9) == Catch::Approx(26.8328).margin(0.001));
}

// Test niepoprawnych wartości - heron
TEST_CASE("Niepoprawne wartości - heron", "[heron]") {
    REQUIRE_THROWS_AS(heron(1, 1, 3), std::invalid_argument);  // Nie spełnia nierówności trójkąta
    REQUIRE_THROWS_AS(heron(-3, 4, 5), std::invalid_argument); // Ujemna wartość
    REQUIRE_THROWS_AS(heron(0, 2, 2), std::invalid_argument);  // Bok o długości 0
}

// Test funkcji check
TEST_CASE("Poprawne wartości - check", "[check]") {
    REQUIRE(check(3, 4, 5) == true);
    REQUIRE(check(5, 12, 13) == true);
    REQUIRE(check(7, 8, 9) == true);
}

// Test niepoprawnych wartości - check
TEST_CASE("Niepoprawne wartości - check", "[check]") {
    REQUIRE(check(1, 1, 3) == false);  // Nie spełnia nierówności trójkąta
    REQUIRE(check(-3, 4, 5) == false); // Ujemna wartość
    REQUIRE(check(0, 2, 2) == false);  // Bok o długości 0
}
