#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.cpp"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
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
	tictactoe3 board;
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
	REQUIRE(board.get_winner() == "X");
	
}
TEST_CASE("Test win by second column", "[X wins second column]")
{
	tictactoe3 board;
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
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test win by third column", "[X wins third column]")
{
	tictactoe3 board;
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
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test win by first row", "[X wins first row]")
{
	tictactoe3 board;
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
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test win by second row", "[X wins second row]")
{
	tictactoe3 board;
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
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test win by third row", "[X wins third row]")
{
	tictactoe3 board;
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
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test win by first diag", "[X wins first diag]")
{
	tictactoe3 board;
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
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test win by second diag", "[X wins second diag]")
{
	tictactoe3 board;
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
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test if no win ")
{
	tictactoe3 board;
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
	REQUIRE(board.get_winner() == "C");
}
TEST_CASE("Test tictactoe4 win by  first column", "[X wins first column]")
{
	tictactoe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X
	//X wins
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");

}
TEST_CASE("Test tictactoe4 win by second column", "[X wins second column]tictactoe4")
{
	tictactoe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X
	board.mark_board(9);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(14);//X
	//X wins
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test tictactoe4 win by third column", "[X wins third column]tictactoe4")
{
	tictactoe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(15);//X
	//X wins

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test tictactoe4 win by fourth column", "[X wins fourth column]tictactoe4")
{
	tictactoe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//X
	//X wins
}
TEST_CASE("Test tictactoe4 win by first row", "[X wins first row]tictactoe4")
{
	tictactoe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X
	//X wins
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test tictactoe4 win by second row", "[X wins second row]tictactoe4")
{
	tictactoe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X
	//X wins
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test tictactoe4 win by third row", "[X wins third row]tictactoe4")
{
	tictactoe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//X
	//X wins
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test tictactoe4 win by fourth row", "[X wins fourth row]tictactoe4")
{
	tictactoe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(14);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(15);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//X
	//X wins
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test tictactoe4 win by first diag", "[X wins first diag]tictactoe4")
{
	tictactoe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//X
	//X wins
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test tictactoe4 win by second diag", "[X wins second diag]tictactoe4")
{
	tictactoe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X
	//X wins
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test tictactoe4 if no win tictactoe4 ")
{
	tictactoe4 board;
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
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(14);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(15);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//O  
	//no win
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "C");
}