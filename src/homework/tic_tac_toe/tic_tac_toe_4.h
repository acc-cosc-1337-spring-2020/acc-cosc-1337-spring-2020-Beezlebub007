//h
#include"tic_tac_toe.h"
#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE__4_H
class tictactoe4 : public tictactoe
{
public:
	tictactoe4() : tictactoe(4) {}
	tictactoe4(std::vector<string> p, string win) :tictactoe(p, win) {};
private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
};




#endif // !tic_tac_toe_4_h