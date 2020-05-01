//h
#include"tic_tac_toe.h"

#include<fstream>
#include<memory>
using std::unique_ptr; using std::make_unique;

#ifndef TICTACTOE_DATA_H
#define TICTACTOE_DATA_H

class tictactoe_data : tictactoe
{
public:
	void save_pegs(const std::vector<string>& pgs);
	std::vector<std::unique_ptr<tictactoe>> get_games();

private:
	const std::string file_name{ "tictactoedata.dat" };
};




#endif // !TICTACTOE_DATA_H
