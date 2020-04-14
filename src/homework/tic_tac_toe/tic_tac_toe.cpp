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
		player = "O";
	}
	else
	{
		player = "X";
	}
}


void tictactoe::mark_board(int position)
{
	
	if (position< 1 || position>pegs.size())
	{
		throw Error("Number must be Between 1 and board size");
	}
	if (player.empty())
	{
		throw Error("Need to start game first");
	}
	pegs[position - 1]= player;
	set_next_player();
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
	
	return false;
}

bool tictactoe::check_row_win()
{
	
	return false;
}

bool tictactoe::check_diagonal_win()
{
	
	return false;
}

void tictactoe::set_winner()
{
	if (player == "X")
	{
		winner = "O";
	}
	else
	{
		winner = "X";
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
		winner = "C";
		return true;
	}
	return check_board_full();
}

std::istream & operator>>(std::istream & in, tictactoe & b)
{

	int mark;
	cout << "Select position 1-" <<b.pegs.size()<< "\n";
	in >> mark;
	try
	{
		b.mark_board(mark);
	}
	catch (Error f)
	{
		cout << f.get_error() << "\n";
	}
	// TODO: insert return statement here
	return in;
}

std::ostream & operator<<(std::ostream & out, const tictactoe & t)
{
	if (t.pegs.size() == 9)
	for (int i = 0; i < 9; i += 3)
		{
			out << t.pegs[i] << "|" << t.pegs[i + 1] << "|" << t.pegs[i + 2] << "\n";
		
		}
	else if (t.pegs.size() == 16)
		for (int i = 0; i < 16; i += 4)
		{
			out << t.pegs[i] << "|" << t.pegs[i + 1] << "|" << t.pegs[i + 2] << "|" << t.pegs[i + 3] << "\n";

		}
	return out;
}
