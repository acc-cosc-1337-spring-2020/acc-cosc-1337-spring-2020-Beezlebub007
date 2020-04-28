#include "tic_tac_toe_data.h"

//cpp

void tictactoe_data::save_pegs(const std::vector<string>& pgs)
{
	std::ofstream file_out(file_name, std::ios_base::trunc);
	for (auto pegs : pgs)
	{
		for (auto c : pgs)
		{
			file_out << " ";
		}
		file_out << pegs;
		file_out << "\n";
	}
	file_out.close();
}

std::vector<std::unique_ptr<tictactoe>> tictactoe_data::get_games()
{
	
	std::vector<tictactoe> boards;
	std::ifstream read_file(file_name);
	
	std::vector<string> board;
	string line;


	return std::vector<std::unique_ptr<tictactoe>>();
}
