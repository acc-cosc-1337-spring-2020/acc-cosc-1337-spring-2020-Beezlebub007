#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"
#include<iostream>
#include<functional>
#include <memory>
using std::cout; using std::cin; using std::string;

int main()
{
	tictactoe_data save_file;
	unique_ptr <TicTacToeManager> manager = make_unique<TicTacToeManager>(save_file);
	string cont;

	do
	{
		int game_type;
		cout << "\n Tictactoe 3 or 4?";
		cin >> game_type;
		unique_ptr <tictactoe> game;
		

		if (game_type == 3)
		{
			game = make_unique<tictactoe3>();
		}
		else if (game_type == 4)
		{
			game = make_unique<tictactoe4>();
		}

		string player = "Y";

		while (!(player == "O" || player == "X"))
		{
			try
			{
				cout << "Enter player: ";
				cin >> player;

				game->start_game(player);
			}
			catch (Error e)
			{
				cout << e.get_error();
			}
		}

		int choice = 1;

		do
		{
			try
			{
				cin >> *game;
				cout << *game;
			}
			catch (Error e)
			{
				cout << e.get_error();
			}

		} while (!game->game_over());

		cout << "\nWinner: " << game->get_winner() << "\n";

		manager->save_game(game);

		cout << "Enter Y to play again: ";
		cin >> cont;

	} while (cont == "Y"|| cont == "y");

	cout << *manager;

	return 0;
}