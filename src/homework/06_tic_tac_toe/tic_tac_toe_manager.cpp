//cpp
#include "tic_tac_toe_manager.h"
#include <string>
void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& b)
{
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
}

void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
    o = o_win;
    x = x_win;
    t = ties;
}

void TicTacToeManager::update_winner_count(std::string winner)
{
    if (winner == "O")
    {
        o_win += 1;
    }
    else if (winner == "X")
    {
        x_win += 1;
    }
    else
    {
        ties += 1;
    }
}

