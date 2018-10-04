#include "Player.hpp"


using namespace std;

Player::Player(){}

Rps_Moves Player::getMove() const{return move_;}

void Player::setMove(Rps_Moves move){move_ = move;}

void Player::displaySelectedMove(){std::cout << "Player move: " << move_ << endl;}
