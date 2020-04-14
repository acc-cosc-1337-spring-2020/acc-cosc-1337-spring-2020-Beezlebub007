#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include<vector>
#include <string>
#include<memory>
using std::string; using std::vector;

class tictactoe 
{
public:
	tictactoe() = default;
	tictactoe(int s) : pegs(s*s, " ") {  }
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() const { return player; }
	string get_winner() const { return winner; }
	friend std::istream& operator>>(std::istream& in, tictactoe& b);
	friend std::ostream& operator<< (std::ostream & out, const tictactoe& t);
protected:
	vector<string>pegs{ 9," " };
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();

private:
	void set_next_player();
	bool check_board_full();
	void clear_board();
	void set_winner();
	string player;
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