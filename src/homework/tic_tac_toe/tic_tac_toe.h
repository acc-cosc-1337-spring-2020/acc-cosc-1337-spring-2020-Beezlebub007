
#include <string>
using std::string;

class tictactoe 
{
public:
	tictactoe(string p) : player{ p } { set_next_player(); }
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() const { return player; }
private:
	string player;
	void set_next_player();
};
class Error
{
public:
	Error(string msg) : message{ msg } {}
	string get_error()const { return message; }
private:
	string message;
};