//h
#include"tic_tac_toe.h"
#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE__3_H
class tictactoe3 : public tictactoe
{
public:
	tictactoe3() = default;
	tictactoe3(int s) : tictactoe(3) {}
private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
};


#endif // !tic_tac_toe_3_h