//h
#include "tic_tac_toe.h"
#include <iostream>
#include <vector>
#include<memory>
using std::unique_ptr; using std::make_unique;
class TicTacToeManager
{
public:
	TicTacToeManager() = default;
	void save_game(unique_ptr<tictactoe>& b);
	friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager & manager);
private:
	
	std::vector<unique_ptr<tictactoe>> games;
	int x_win{ 0 };
	int o_win{ 0 };
	int tie_win{ 0 };
	void update_winner_count(string winner);
};