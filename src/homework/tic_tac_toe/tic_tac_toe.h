#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include<vector>
#include <string>
using std::string; using std::vector;

class tictactoe 
{
public:
	tictactoe() = default;
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	void display_board()const;
	string get_player() const { return player; }
	string get_winner() const { return winner; }
private:
	void set_next_player();
	bool check_board_full();
	void clear_board();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void set_winner();
	string player;
	vector<string>pegs{ 9," " };
	string winner;
};
#endif // !tic_tac_toe_h

#ifndef ERROR_H
#define ERROR_H


class Error
{
public:
	Error(string msg) : message{ msg } {}
	string get_error()const { return message; }
private:
	string message;
};
#endif // !ERROR_H