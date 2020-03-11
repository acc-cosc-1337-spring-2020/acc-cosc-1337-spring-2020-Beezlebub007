#include "tic_tac_toe.h"
#include<string>
#include<iostream>
using std::cout;
//cpp

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
	clear_board();


}

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
	pegs[position - 1]= player;
	set_next_player();
}

void tictactoe::display_board() const
{
	for (int i = 0; i < 9; i += 3)
	{
		cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}
}


bool tictactoe::check_board_full()
{
	for (std::size_t i = 0; i < pegs.size(); ++i)
	{
		if (pegs[i] == " ")
		{
			return false;
		}
	}
	return true;
}


void tictactoe::clear_board()
{
	for (auto &peg : pegs)
	{
		peg = " ";
	}
}


bool tictactoe::game_over()
{
	return check_board_full();
}