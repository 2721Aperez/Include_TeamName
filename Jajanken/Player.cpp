#include "Player.hpp"
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
        case Rps_Moves::ROCK:
            setMove(Rps_Moves::ROCK);
            break;
        case Rps_Moves::PAPER:
            setMove(Rps_Moves::PAPER);
            break;
        case Rps_Moves::SCISSORS:
            setMove(Rps_Moves::SCISSORS);
            break;
        default:
            break;
    }
}

void Player::displaySelectedMove()
{
    std::cout << "Player move: " << move_ << endl;
}
