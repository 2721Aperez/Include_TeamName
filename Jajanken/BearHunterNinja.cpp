#include "BearHunterNinja.h" 

void BearHunterNinja::displayRules()
{
    std::cout << "Hunter Shoots Bear" << std::endl;
    std::cout << "Bear Eats Ninja" << std::endl;
    std::cout << "Ninja Kills Hunter" << std::endl;
}

void BearHunterNinja::setPlayerMove(Bhn_Moves player){player_move = player;}

Bhn_Moves BearHunterNinja::genCompMove() 
{
    Bhn_Moves move = static_cast<Bhn_Moves>(rand() % 3); 
    return move;
}

void BearHunterNinja::setComputerMove(Bhn_Moves comp)
{
    comp = genCompMove();
    computer_move = comp;;
}

void BearHunterNinja::displayMove()
{

}

Bhn_Moves BearHunterNinja::getPlayerMove() const {return player_move;}
Bhn_Moves BearHunterNinja::getComputerMove() const {return computer_move;}