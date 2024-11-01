#include "tic_tac_toe.h"
#include <iostream>
#include <string>
using std::cout; using std::cin;
using std::string;


int main() 
{
	TicTacToe game;
	string first_player;
	char user_choice = 'y';
	
	do
	{
		cout<<"Enter first player (X or O): ";
		cin>>first_player;

		while (first_player != "X" && first_player != "O")
		{
			cout<<"Invalid Input, Input First Player (X or O): ";
			cin>>first_player;
		}

		game.start_game(first_player);

		int position;

		while (!game.game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
		}

		if (game.get_winner()=="C")
		{
			cout<<"The game ended in a tie!\n";
		}
		else 
		{
			cout<<game.get_winner()<<" is the winner!\n";
		}

		cout<<"Play Again? Enter Y or y: ";
		cin>>user_choice;
		
	} while (user_choice=='y' || user_choice == 'Y');
	

	return 0;
}