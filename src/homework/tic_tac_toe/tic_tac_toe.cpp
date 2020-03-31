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

bool tictactoe::check_column_win()
{
	if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
	{
		return true;
	}
	else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
	{
		return true;
	}
	else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
	{
		return true;
	}
	else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
	{
		return true;
	}
	else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
	{
		return true;
	}
	return false;
}

bool tictactoe::check_row_win()
{
	if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
	{
		return true;
	}
	else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
	{
		return true;
	}
	else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
	{
		return true;
	}
	else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
	{
		return true;
	}
	else if (pegs[6] == "0" && pegs[7] == "0" && pegs[8] == "0")
	{
		return true;
	}
	return false;
}

bool tictactoe::check_diagonal_win()
{
	if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X" )
	{
		return true;
	}
	else if (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O" )
	{
		return true;
	}
	else if(pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
	{
		return true;
	}
	return false;
}

void tictactoe::set_winner()
{
	if (player == "X")
	{
		winner = 'O';
	}
	else
	{
		winner = 'X';
	}
}


bool tictactoe::game_over()
{
	if (check_column_win() == true || check_diagonal_win() == true || check_row_win() == true)
	{
		set_winner();
		return true;
	}
	else if(check_board_full() == true)
	{
		winner = 'C';
		return true;
	}
	return check_board_full();
}