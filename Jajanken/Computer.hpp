#pragma once 

#include "Player.hpp"
#include "Rps_Moves.hpp"
#include"ChooserFactory.hpp"



class Computer :public Player
{

public:
	Computer();
	void generateMove(std::string);
	moves getMove()const;
};


