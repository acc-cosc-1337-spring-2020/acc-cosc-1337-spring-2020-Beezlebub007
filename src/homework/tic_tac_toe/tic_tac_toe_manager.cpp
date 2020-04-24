#include "tic_tac_toe_manager.h"

//cpp

void TicTacToeManager::save_game(unique_ptr<tictactoe>& b)
{
	std::move(games);
	update_winner_count(b->get_winner());
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
