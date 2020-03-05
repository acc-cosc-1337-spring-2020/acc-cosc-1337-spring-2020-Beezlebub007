#include"tic_tac_toe.h"
#include <iostream>
using std::cout; using std::cin;
int main() 
{
	char choice;
	string letter;
	int mark;

	
	do
	{ 
		cout << "Player One select X or O " << "\n";
		cin >> letter;
		tictactoe start;
		try
		{
			start.start_game(letter);
		}
		catch (Error e)
		{
			cout << e.get_error() << "\n";
		}
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
		cout << "continue? Y or N.";
		cin >> choice;
	} while (choice == 'Y'|| choice == 'y');
	{

	}
	return 0;
}