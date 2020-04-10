#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"
#include <iostream>
using std::cout; using std::cin;
int main()
{
	
	tictactoe start;
	TicTacToeManager winner;
	char choice;
	string letter;
	int mark;
	auto player = start.get_player();

	do
	{
		do
		{
			try
			{
				cout << "Player One select X or O " << "\n";
				cin >> player;
				start.start_game(player);
			}
			catch (Error e)
			{
				cout << e.get_error() << "\n";
			}

		} while (!(player == "O" || player == "X"));
		{

		}
		do
		{
			winner.save_game(start);
			cout << start;
			cin >> start;
			start.game_over();
			
		} while (start.game_over() == false);
		{

		}
		winner.save_game(start);
		cout << start;
		start.get_winner();
		cout << winner;
		cout << "continue? Y or N.";
		cin >> choice;
		
	
	}while (choice == 'Y' || choice == 'y');
	{

	}
	cout << start;
	start.get_winner();
	cout << winner;

	



	return 0;
}