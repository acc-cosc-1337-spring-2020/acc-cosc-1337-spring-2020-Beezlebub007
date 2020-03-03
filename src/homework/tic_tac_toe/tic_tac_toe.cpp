#include "tic_tac_toe.h"
#include<string>
#include<stdlib.h>
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
	player == first_player;
	if (player != "O" || player != "X")
	{
		throw Error("Player must be X or O");
	}
}
void tictactoe::mark_board(int position)
{
	start_game();
	if (position = rand() % 9 + 1)
	{
		set_next_player();
	}
	else if (position != rand() % 9 + 1)
	{
		throw Error("Number must be Between 1 and 9");
	}
	else
	{
		throw Error("Must start game first");
	}

}