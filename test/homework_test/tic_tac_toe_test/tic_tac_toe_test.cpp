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
TEST_CASE("test game ends when vector is full")
{
	tictactoe game;
	game.start_game("X");
	for (int i = 1;i < 6;++i)
	{
		game.mark_board(i);
		REQUIRE(game.game_over() == false);
	}
	game.mark_board(9);
	game.mark_board(6);
	game.mark_board(7);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);
}
TEST_CASE("Test mark_board accepts values from  1 to 9 only")
{
	tictactoe game;
	game.start_game("X");
	REQUIRE_THROWS_AS(game.mark_board(10), Error);
	REQUIRE_THROWS_AS(game.mark_board(0), Error);
	game.mark_board(5);
	
}
TEST_CASE("Test win by first column", "[X wins first column]")
{
	tictactoe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X
	//X wins
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by second column", "[X wins second column]")
{
	tictactoe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X
	//X wins
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by third column", "[X wins third column]")
{
	tictactoe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X
	//X wins
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by first row", "[X wins first row]")
{
	tictactoe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X
	//X wins
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by second row", "[X wins second row]")
{
	tictactoe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X
	//X wins
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by third row", "[X wins third row]")
{
	tictactoe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X
	//X wins
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by first diag", "[X wins first diag]")
{
	tictactoe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X
	//X wins
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by second diag", "[X wins second diag]")
{
	tictactoe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X
	//X wins
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test if no win ")
{
	tictactoe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X
	//no win
	REQUIRE(board.game_over() == true);
}