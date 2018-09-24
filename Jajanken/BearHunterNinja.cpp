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
    computer_move = comp;
}

void BearHunterNinja::displayMove()
{

}

Bhn_Moves BearHunterNinja::getPlayerMove() const {return player_move;}
Bhn_Moves BearHunterNinja::getComputerMove() const {return computer_move;}

Bhn_Moves BearHunterNinja::compareMoves()
{
    Bhn_Moves player, comp, winner;
    GameResults results;

    player = getPlayerMove();
    comp = getComputerMove();

    switch(player)
    {
        case Bhn_Moves::BEAR:
            if(comp == Bhn_Moves::BEAR){results.setTies(1);}
            else if(comp == Bhn_Moves::HUNTER) 
            {
                results.addPlayerLoss(1);
                results.addCompWin(1);
            }
            else if(comp == Bhn_Moves::NINJA)
            {
                results.addPlayerWin(1);
                results.addCompLoss(1);
            }
        break;

        case Bhn_Moves::HUNTER:
            if(comp == Bhn_Moves::HUNTER){results.setTies(1);}
            else if(comp == Bhn_Moves::NINJA) 
            {
                results.addPlayerLoss(1);
                results.addCompWin(1);
            }
            else if(comp == Bhn_Moves::BEAR)
            {
                results.addPlayerWin(1);
                results.addCompLoss(1);
            }
        break;

        case Bhn_Moves::NINJA:
            if(comp == Bhn_Moves::NINJA){results.setTies(1);}
            else if(comp == Bhn_Moves::BEAR) 
            {
                results.addPlayerLoss(1);
                results.addCompWin(1);
            }
            else if(comp == Bhn_Moves::HUNTER)
            {
                results.addPlayerWin(1);
                results.addCompLoss(1);
            }
        break;

    return player; //placeholder
            
    }
}