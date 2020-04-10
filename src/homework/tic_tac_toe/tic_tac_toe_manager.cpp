#include "tic_tac_toe_manager.h"

//cpp

void TicTacToeManager::save_game(const tictactoe b)
{
	games.push_back(b);
	update_winner_count(get_winner());
}

void TicTacToeManager::update_winner_count(string winner)
{
	if(winner=="X")
	{
		x_win = x_win + 1;
	}
	else if (winner == "O")
	{
		o_win = o_win + 1;
	}
	else if (winner == "C")
	{
		tie_win = tie_win + 1;
	}
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{

	out << "X win" << manager.x_win << " O win: " << manager.o_win << " ties " << manager.tie_win;
	for (auto game : manager.games)
	{
		

		out <<"X win"<< manager.x_win <<"O win: "<< manager.o_win <<"ties "<< manager.tie_win;
		
	}

	return out;
}
