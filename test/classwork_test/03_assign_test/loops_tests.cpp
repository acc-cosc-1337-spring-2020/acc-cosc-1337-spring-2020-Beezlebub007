#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test factorial function")
{
	REQUIRE(function_factorial(2) == 2);
	REQUIRE(function_factorial(5) == 120);
	REQUIRE(function_factorial(3) == 6);
}