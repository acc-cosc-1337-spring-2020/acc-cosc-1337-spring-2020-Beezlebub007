#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.cpp"
#include<string>
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test can’t call mark board before start game")

{

	tictactoe game;
	REQUIRE_THROWS_AS(game.mark_board(1), Error);

}
TEST_CASE("Test start game accepts only X or O")
{
	tictactoe game;
	REQUIRE_THROWS_AS(game.start_game("S"), Error);
}
TEST_CASE("Test set first player to X")
{
	tictactoe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}
TEST_CASE("Test set first player to O")
{
	tictactoe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}
TEST_CASE("Test start game with X game flow")
{
	tictactoe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
	game.mark_board(4);
	REQUIRE(game.get_player() == "O");

}
TEST_CASE("Test start game with O game flow")
{
	tictactoe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
	game.mark_board(9);
	REQUIRE(game.get_player() == "X");

}