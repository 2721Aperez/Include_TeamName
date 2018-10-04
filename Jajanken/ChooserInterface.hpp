//
//  ChooserInterface.h
//  Jajanken
//
//  Created by Zelda on 9/30/18.
//  Copyright © 2018 Zelda. All rights reserved.
//

#ifndef ChooserInterface_h
#define ChooserInterface_h

#include "Rps_Moves.hpp"
#include "Player.hpp"

class ChooserInterface {
public:
	virtual void selectMove() = 0;
};

class RandomChooser : ChooserInterface {
public:
	void selectMove() override
	{
		Rps_Moves move = static_cast<Rps_Moves>(rand() % 2);
		Player::setMove(move);
	}
};

class SmartChooser : ChooserInterface {
public:
	void selectMove() override
	{

	}
};

#endif /* ChooserInterface_h */
