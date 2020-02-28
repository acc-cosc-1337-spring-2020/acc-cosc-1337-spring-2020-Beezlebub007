#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include"rectangle.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test calculate area")
{
	Rect a(4, 5);
	REQUIRE(a.get_area() == 20);

	Rect a2(10, 10);
	REQUIRE(a2.get_area() == 100);

	Rect a3(10, 100);
	REQUIRE(a3.get_area() == 1000);
}