#ifndef GAMERESULT_H_
#define GAMERESULT_H_

class GameResults
{
private:
    int player_wins, player_loss, comp_wins, comp_loss, ties, round;
public:
    void setPlayerWins(int);
    void setPlayerLoss(int);

    void addPlayerWin(int);
    void addPlayerLoss(int);

    void addCompWin(int);
    void addCompLoss(int);
    
    void setCompWins(int);
    void setCompLoss(int);

    void setRound(int);

    void displayResults();
    void displayRounds();

    int getPlayerWins() const;
    int getPlayerLoss() const;

    int getCompWins() const;
    int getCompLoss() const;

    void setTies(int);
    int getTies() const;

};
#endif