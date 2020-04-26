#include "tic_tac_toe_manager.h"

//cpp

void TicTacToeManager::save_game(unique_ptr<tictactoe>& b)
{
	update_winner_count(b->get_winner());
	games.push_back(std::move(b));
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

	for (auto &game : manager.games)
	{
		out << *game;
	}
	out << " X win" << manager.x_win << " O win: " << manager.o_win << " ties " << manager.tie_win;

	return out;
}
