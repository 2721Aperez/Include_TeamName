#ifndef GAMERESULT_H_
#define GAMERESULT_H_

class GameResults
{
private:
    int player_wins, player_loss, comp_wins, comp_loss, ties;
public:
    void setPlayerWins(int);
    void setPlayerLoss(int);

    void addPlayerWin(int);
    void addPlayerLoss(int);

    void addCompWin(int);
    void addCompLoss(int);
    
    void setCompWins(int);
    void setCompLoss(int);

    void displayResults();
    void displayRounds();

    void getPlayerWins() const;
    void getPlayerLoss() const;

    void getCompWins() const;
    void getCompLoss() const;

    void setTies(int);
    void getTies() const;

};
#endif