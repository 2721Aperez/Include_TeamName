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


class ChooserInterface {
public:
	virtual moves selectMove() = 0;
};

class RandomChooser : public ChooserInterface {
public:
	moves selectMove()
	{
		return static_cast<moves>(rand() % 3);
	}
};

class SmartChooser : public ChooserInterface {
public:
	moves selectMove() override
	{
		moves move;

		return move;
	}
};

#endif /* ChooserInterface_h */
