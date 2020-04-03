#include"tic_tac_toe.h"
#include <iostream>
using std::cout; using std::cin;
int main() 
{
	tictactoe start;
	char choice;
	string letter;
	int mark;
	int play = 1;
	bool win = false;
	auto player = start.get_player();
	do
	{
		do {
			play = 1;
			cout << "Player One select X or O " << "\n";
			cin >> player;
			try
			{
				start.start_game(player);
			}
			catch (Error e)
			{
				cout << e.get_error() << "\n";
				play = 0;
			}
		} while (play != 1);
		start.display_board();
		do
		{
			
			cout << "Select position 1-9 " << "\n";
			cin >> mark;
			try
			{
				start.mark_board(mark);
			}
			catch (Error f)
			{
				cout << f.get_error() << "\n";
			}
			cout << mark << " = " << player << "\n";
			start.display_board();
			start.game_over();
			
			win = start.game_over();
		} while (win == false);
	cout << "winner is " << start.get_winner() << "\n";
	cout << "continue? Y or N.";
	cin >> choice;
	} while (choice == 'Y'|| choice == 'y');
	{

	}
	return 0;
}