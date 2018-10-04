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
	virtual Rps_Moves selectMove() = 0;
};

class RandomChooser : public ChooserInterface {
public:
	Rps_Moves selectMove() override
	{
		return static_cast<Rps_Moves>(rand() % 2);
	}
};

class SmartChooser : public ChooserInterface {
public:
	Rps_Moves selectMove() override
	{
		Rps_Moves move;

		return move;
	}
};

#endif /* ChooserInterface_h */
