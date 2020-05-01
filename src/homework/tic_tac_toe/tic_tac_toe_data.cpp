#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
//cpp

void tictactoe_data::save_pegs(const std::vector<string>& pgs)
{
	std::ofstream file_out(file_name, std::ios_base::trunc);
	for (auto game : pgs)
	{
		for (auto c : pgs)
		{
			file_out << c;
		}
		file_out << game;
		file_out << "\n";
	}
	file_out.close();
}

std::vector<std::unique_ptr<tictactoe>> tictactoe_data::get_games()
{
	std::vector<std::unique_ptr<tictactoe>>  boards;
	string line;
	vector<string> pegs;
	
	std::ifstream read_file(file_name);

	if (read_file.is_open())
	{
		while (getline(read_file, line))
		{
			for (int ch = 0; ch < line.size() - 1; ch++)
			{
				std::string chstring(1, line[ch]);
				pegs.push_back(chstring);
			}

			string winner;
			unique_ptr<tictactoe> board;
			if (pegs.size() == 9)
			{
				board = make_unique<tictactoe3>(pegs, winner);
			}
			else if (pegs.size() == 16)
			{
				board = make_unique<tictactoe4>(pegs, winner);
			}
			boards.push_back(board);
		}
		read_file.close();
	}
	
	return boards;
}
