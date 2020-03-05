#include"tic_tac_toe.h"
#include <iostream>
using std::cout; using std::cin;
int main() 
{
	tictactoe start;
	char choice;
	string letter;
	int mark;
	auto player = start.get_player();
	cout << "Player One select X or O " << "\n";
	cin >> player;
	
	try
	{
		start.start_game(player);
	}
	catch (Error e)
	{
		cout << e.get_error() << "\n";
	}
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
		cout << "continue? Y or N.";
		cin >> choice;
	} while (choice == 'Y'|| choice == 'y');
	{

	}
	return 0;
}