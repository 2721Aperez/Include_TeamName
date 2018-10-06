#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "Player.hpp"
#include "Computer.hpp"
#include "GameResults.hpp"
#include "Rps_Moves.hpp"
#include "RockPaperScissor.hpp"

void writeFile(std::ofstream &file, std::map<std::string, int> record);
void storeString(std::map<std::string, int> &record, std::string pattern);

int main()
{
    Player player;
    Computer computer;
    RockPaperScissor game;
    
    std::map<std::string, int> records;
    
    char choice;
    int count = 0;
    
    std::string pattern;
    std::string str;
    
    std::cout << "Would you like to see the rules? (Y) (N)" << std::endl;
    std::cin >> choice;
    
    if(toupper(choice) == 'Y')
    {
        game.displayRules();
    }
    
    std::cout<<"Play Rock Paper Scissors? (Y) (N)" << std::endl;
    std::cin >> choice;
    
    if(toupper(choice) =='Y')
    {
        int i = 0;
        while(i < 20)
        {
            std::cout<< '\n';
            game.showGame();
            std::cout << "Select A B or C" << std::endl;
            std::cout << "A) Rock " << std::endl;
            std::cout << "B) Paper " << std::endl;
            std::cout << "C) Scissors " << std::endl;
            std::cin >> choice;
            
            switch(toupper(choice))
            {
                    if(count == 3)
                    {
                        str = pattern;
                        //some function to pass str to Computer for prediction
                    }
                    if(count < 5){
                    case 'A':
                        player.setMove(moves::ROCK);
                        pattern += 'R';
                        count++;
                        break;
                        
                    case 'B':
                        player.setMove(moves::PAPER);
                        pattern += 'P';
                        count++;
                        break;
                        
                    case 'C':
                        player.setMove(moves::SCISSORS);
                        pattern += 'S';
                        count++;
                        break;
                        
                    default: std::cout << "Not a Valid Option" <<std::endl;
                        break;
                    }
                    else{
                        storeString(records, pattern);
                        count = 0;
                    }
            }
            
            computer.generateMove();
            //computer.displaySelectedMove();
            player.displaySelectedMove();
            std::cout<<std::endl;
            //game.compareMoves(player.getMove(), computer.getMove());
            std::cout<<std::endl;
            
            i++;
        }
        
        game.showEndGame();
    }
    else
    {
        std::cout<<"Goodbye" << std::endl;
        return 0;
    }
    
    std::ofstream file;
    file.open("data.txt");
    
    if(file.is_open())
    {
        writeFile(file, records);
    }
    else
    {
        std::cout << "Error opening file" << std::endl;
    }
    
    file.close();
    
    return 0;
    
}

void storeString(std::map<std::string, int> &record, std::string pattern)
{
    std::map<std::string, int>::iterator it;
    
    it = record.find(pattern);
    if(it != record.end()) // the word string exists
    {
        record[pattern]++;
    }
    else
    {
        record.insert(std::pair<std::string, int>(pattern, 1));
    }
}

void writeFile(std::ofstream &file, std::map<std::string, int> record)
{
    std::map<std::string, int>::iterator it;
    for(it = record.begin(); it != record.end(); ++it)
    {
        file << it->first;
        file << ":";
        file << it->second;
        file << std::endl;
    }
}

