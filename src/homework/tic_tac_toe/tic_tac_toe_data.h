//h
#include"tic_tac_toe.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include"tic_tac_toe_manager.h"
#include<fstream>

#ifndef TICTACTOE_DATA_H
#define TICTACTOE_DATA_H

class tictactoe_data: public tictactoe
{
public:
	void save_pegs(const std::vector<string>& pgs);
	std::vector<std::unique_ptr<tictactoe>> get_games();

private:
	const std::string file_name{ "tictactoedata.dat" };
};




#endif // !TICTACTOE_DATA_H
