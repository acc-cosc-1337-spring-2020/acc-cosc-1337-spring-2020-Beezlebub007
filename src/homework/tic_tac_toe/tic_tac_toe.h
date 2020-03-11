#include<vector>
#include <string>
using std::string; using std::vector;

class tictactoe 
{
public:
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	void display_board()const;
	string get_player() const { return player; }
private:
	void set_next_player();
	bool check_board_full();
	void clear_board();
	string player;
	vector<string>pegs{ 9," " };
};
class Error
{
public:
	Error(string msg) : message{ msg } {}
	string get_error()const { return message; }
private:
	string message;
};