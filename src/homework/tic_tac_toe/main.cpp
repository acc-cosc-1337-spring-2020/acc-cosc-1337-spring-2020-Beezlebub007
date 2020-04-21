#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
#include<functional>

using std::cout; using std::cin; using std::string;

int main()
{
	TicTacToeManager manager;
	string cont;
	std::vector<std::reference_wrapper<tictactoe>> games;

	do
	{
		int game_type;
		cout << "\nTictactoe 3 or 4?";
		cin >> game_type;
		tictactoe3 game3;
		tictactoe4 game4;

		if (game_type == 3)
		{
			games.push_back(game3);
		}
		else if (game_type == 4)
		{
			games.push_back(game4);
		}

		std::reference_wrapper<tictactoe> game = games.back();

		string player = "Y";

		while (!(player == "O" || player == "X"))
		{
			try
			{
				cout << "Enter player: ";
				cin >> player;

				game.get().start_game(player);
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
				cin >> game.get();
				cout << game.get();
			}
			catch (Error e)
			{
				cout << e.get_error();
			}

		} while (!game.get().game_over());

		manager.save_game(game.get());

		cout << "\nWinner: " << game.get().get_winner() << "\n";

		cout << "Enter Y to play again: ";
		cin >> cont;

	} while (cont == "Y");

	cout << manager;

	return 0;
}