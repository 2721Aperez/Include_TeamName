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
	moves selectMove() override
	{
		return static_cast<moves>(rand() % 2);
	}
};

class SmartChooser : public ChooserInterface {
public:
	moves selectMove() override
	{
		moves move;	
		int frequency = 0;
		std::string str, numb_str;
		std::ifstream myfile;
		myfile.open("data.txt");

		if (!myfile) {return;}
		
		while (myfile)
		{
			getline(myfile, str);
			numb_str = str.substr(str.find(":") + 1);
			str.erase(str.find(":"));
			frequency = stoi(numb_str);
			
		}


		myfile.close();

		return move;
	}
};

#endif /* ChooserInterface_h */
