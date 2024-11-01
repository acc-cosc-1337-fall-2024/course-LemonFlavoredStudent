//cpp
#include "tic_tac_toe.h"

using std::cout;

bool TicTacToe::game_over()
{
    //Check for Win by Row
    if (check_row_win()||check_column_win()||check_diagonal_win())
    {
        set_winner();
        return true;
    }
    //Check for tie
    else if (check_board_full())
    {
        winner = "C";
        return true;
    }
    else 
    {
        return false;
    }

}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();

}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for (long unsigned int i=0; i<pegs.size(); i+=3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

//private functions

void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player=="X")
    {
        player = "O";
    }
    else 
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(long unsigned int i=0; i<pegs.size();i++)
    {
        if(pegs[i]==" ")
        {
            return false;
        }
    }
    return true;
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}

bool TicTacToe::check_column_win()
{
    if ((pegs[0] != " " && pegs[0]==pegs[3] && pegs[3]==pegs[6])||
    (pegs[1] != " " && pegs[1]==pegs[4] && pegs[4]==pegs[7])||
    (pegs[2] != " " && pegs[2]==pegs[5] && pegs[5]==pegs[8]))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool TicTacToe::check_row_win()
{
    if ((pegs[0] != " " && pegs[0]==pegs[1] && pegs[1]==pegs[2])||
    (pegs[3] != " " && pegs[3]==pegs[4] && pegs[4]==pegs[5])||
    (pegs[6] != " " && pegs[6]==pegs[7] && pegs[7]==pegs[8]))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool TicTacToe::check_diagonal_win()
{
    if ((pegs[0] != " " && pegs[0]==pegs[4] && pegs[4]==pegs[8])||
    (pegs[2] != " " && pegs[2]==pegs[4] && pegs[4]==pegs[6]))
    {
        return true;
    }
    else
    {
        return false;
    }
}