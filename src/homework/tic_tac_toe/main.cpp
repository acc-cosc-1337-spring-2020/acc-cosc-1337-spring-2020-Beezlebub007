#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"

#include <iostream>
using std::cout; using std::cin;
int main()
{
	
	tictactoe start;
	TicTacToeManager winner;
	char choice;
	string letter;
	int mark;
	string player;
	int gamenum;
	bool gamestate= true;
	do
	{
		cout << "Player One select gamesize 3 or 4 " << "\n";
		cin >> gamenum;
		do
		{
		if (gamenum == 3)
		{
			tictactoe3 game3;
			try
			{
				cout << "Player One select X or O " << "\n";
				cin >> player;
				game3.start_game(player);
			}
			catch (Error e)
			{
				cout << e.get_error() << "\n";
			}
			do
			{
				winner.save_game(game3);
				cout << game3;
				cin >> game3;
				game3.game_over();
				game3.get_winner();
				gamestate = game3.game_over();
			} while (gamestate == false);
			{

			}
			
			cout << game3;
			
			cout << winner;
		}
		else if (gamenum == 4)
		{
			tictactoe4 game4;
			try
			{
				cout << "Player One select X or O " << "\n";
				cin >> player;
				game4.start_game(player);
			}
			catch (Error e)
			{
				cout << e.get_error() << "\n";
			}
			do
			{
				winner.save_game(game4);
				cout << game4;
				cin >> game4;
				game4.game_over();

			} while (game4.game_over() == false);
			{

			}
			winner.save_game(game4);
			cout << game4;
			game4.get_winner();
			cout << winner;
		}

	} while (!(gamenum == 3 || gamenum == 4));
	{

	}

		
		cout << "continue? Y or N.";
		cin >> choice;
		
	
	}while (choice == 'Y' || choice == 'y');
	{

	}
	
	cout << winner;

	return 0;
}