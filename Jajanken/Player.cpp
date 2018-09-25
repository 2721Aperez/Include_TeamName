#include "Player.h"
#include <string>

using namespace std;

Player::Player()
{
  
}

Rps_Moves Player::getMove() const
{
    return move_;
}

void Player::setMove(Rps_Moves move)
{
    move_ = move;
}

void Player::selectMove(Rps_Moves move)
{
    switch(move)
    {
        case ROCK:
            setMove(ROCK);
            break;
        case PAPER:
            setMove(PAPER);
            break;
        case SCISSORS:
            setMove(Scissors);
            break;
        default:
            break;
    }
}

void Player::displaySelectedMove()
{
    cout << "Player move: " << move_ << endl;
}
