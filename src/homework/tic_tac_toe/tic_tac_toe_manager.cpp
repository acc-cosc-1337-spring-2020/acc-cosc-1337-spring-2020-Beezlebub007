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
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else if (winner == "C")
	{
		tie_win++;
	}
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	auto x_win{ 0 };
	auto o_win{ 0 };
	auto tie_win{ 0 };
	
	for (auto game : manager.games)
	{
		
		if (game.get_winner() == "X")
		{
			x_win++;
		}
		else if (game.get_winner() == "O")
		{
			o_win++;
		}
		else if (game.get_winner() == "C")
		{ 
			tie_win++;
		}
	}
	out << " X win" << x_win << " O win: " << o_win << " ties " << tie_win;

	return out;
}
