#include "tic_tac_toe.h"
#include<string>
#include<iostream>
//cpp

void tictactoe::set_next_player()
{
	if (player == "X")
	{
		player = 'O';
	}
	else
	{
		player = 'X';
	}
}
void tictactoe::start_game(string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		player = first_player;
	}
	else
	{
		throw Error("Player must be X or O");
	}

		
	
}
void tictactoe::mark_board(int position)
{
	
	if (position< 1 || position>9)
	{
		throw Error("Number must be Between 1 and 9");
	}
	if (player.empty())
	{
		throw Error("Need to start game first");
	}
	set_next_player();
}