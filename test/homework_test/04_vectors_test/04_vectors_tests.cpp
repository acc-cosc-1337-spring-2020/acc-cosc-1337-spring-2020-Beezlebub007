#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("test get max from vectors")
{
	std::vector<int> num{ 3,8,1,99,1000 };
	REQUIRE(get_max_from_vector(num) == 1000);
	std::vector<int> num1{ 15,12,11,99,88 };
	REQUIRE(get_max_from_vector(num1) == 99);
	std::vector<int> num2{ 150,120,11,990,88888 };
	REQUIRE(get_max_from_vector(num2) == 88888);
}



TEST_CASE("test is prime")
{
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(44) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(59) == true);
}

TEST_CASE("test vector of primes")
{
	std::vector<int> num{ 2,3,5,7};
	REQUIRE(vector_of_primes(10) == num);
	std::vector<int> num2{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	REQUIRE(vector_of_primes(50) == num2);
}