//h
#include "tic_tac_toe.h"
#include <iostream>
#include <vector>

class TicTacToeManager : public tictactoe
{
public:
	TicTacToeManager() = default;
	void save_game(const tictactoe b);
	friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager & manager);
private:
	std::vector<tictactoe> games;
	int x_win{ 0 };
	int o_win{ 0 };
	int tie_win{ 0 };
	void update_winner_count(string winner);
};