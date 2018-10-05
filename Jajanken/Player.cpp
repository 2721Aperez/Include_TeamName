#include "Player.hpp"


using namespace std;

Player::Player(){}

moves Player::getMove() const{return move_;}

void Player::setMove(moves move){move_ = move;}

void Player::displaySelectedMove(){std::cout << "Player move: " << move_ << endl;}
