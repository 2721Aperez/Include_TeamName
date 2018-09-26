#include "GameResults.hpp"

GameResults::GameResults()
{
	player_wins = 0;
	player_loss = 0;
	comp_wins = 0;
	comp_loss = 0;
	ties_ = 0;
	round_ = 1;
}
void GameResults::showStats()
{
	std::cout<<"Player Wins: " << getPlayerWins() << " Player Losses: " << getPlayerLoss() << std::endl;
	std::cout<<"Computer Wins: " << getCompWins() << " Computer Losses: " << getCompLoss() << std::endl;
	std::cout<< "Amount of Ties: " << getTies() << std::endl;
}
 void GameResults::setPlayerWins(int win){player_wins = win;}

 void GameResults::setPlayerLoss(int lose){player_loss = lose;}

 void GameResults::addPlayerWin(int win)
 {
    player_wins += win;
    setPlayerWins(player_wins);

    showStats();
 }

 void GameResults::addPlayerLoss(int lose)
 {
    player_loss += lose;
    setPlayerLoss(player_loss);

    showStats();
 }

 void GameResults::addCompWin(int win)
 {
    comp_wins += win;
    setCompWins(comp_wins);
 }

 void GameResults::addCompLoss(int lose)
 {
    comp_loss+=lose;
    setCompLoss(comp_loss);
 }

 void GameResults::setCompWins(int win){comp_wins = win;}
 void GameResults::setCompLoss(int lose){comp_loss = lose;}
 void GameResults::setRound(int round){round_ += round;}

 void GameResults::displayResults()
 {
     if(player_wins > comp_wins){
      std::cout << "Player wins with a score of " << getPlayerWins() <<" to " << getCompWins() <<"!" <<std::endl;
     }
     else if(comp_wins > player_wins){
      std::cout << "Computer wins with a score of " << getCompWins() << " to " << getPlayerWins() <<"!" << std::endl;
     }
     else{
      std::cout << "Game tied with both the player and computer having " << getPlayerWins() << " wins." <<std::endl;
     }
     std::cout<< "Ties: " << getTies() << std::endl;

 }

 void GameResults::displayRounds(){std::cout << "Round: " << round_ <<std::endl;}

 int GameResults::getPlayerWins() const{return player_wins;}

 int GameResults::getPlayerLoss() const{return player_loss;}

 int GameResults::getCompWins() const{return comp_wins;}

 int GameResults::getCompLoss() const{return comp_loss;}

 void GameResults::setTies(int ties)
 {
    ties_ += ties;

    showStats();
 }

 int GameResults::getTies() const{return ties_;}
