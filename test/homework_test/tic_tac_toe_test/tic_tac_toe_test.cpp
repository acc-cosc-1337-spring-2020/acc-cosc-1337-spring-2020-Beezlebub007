#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.cpp"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test only accepts X and O")
{
	tictactoe game();
	REQUIRE_THROWS_AS(game.start_game()Error);

}