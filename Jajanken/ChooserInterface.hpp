//
//  ChooserInterface.h
//  Jajanken
//
//  Created by Zelda on 9/30/18.
//  Copyright © 2018 Zelda. All rights reserved.
//

#ifndef ChooserInterface_h
#define ChooserInterface_h

#include <fstream>
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
private:
	std::string list;
public:
	void setList(std::string str)
	{
		list = str;
	}
	moves selectMove() 
	{
		moves move;	
		int frequency = 0;
		int frequency2 = 0;
		std::string stored ="";
		std::string str, numb_str;
		std::ifstream myfile;
		myfile.open("data.txt");

		
		while (myfile)
		{
			getline(myfile, str);
			numb_str = str.substr(str.find(":") + 1);
			str.erase(str.find(":") );
			frequency = std::stoi(numb_str);

			if (str.find(list) != std::string::npos)
			{
				if (frequency2 < frequency)
				{ 
					frequency2 = frequency;
					stored = str;	
				}
			}
		}
		int length = stored.length()-1;
		switch (stored[length])
		{
		case 'R':
			move = PAPER;
			break;
		case 'P':
			move = SCISSORS;
			break;
		case 'S':
			move = ROCK;
			break;
		default: move = static_cast<moves>(rand() % 3);

		}

		myfile.close();

		return move;
	}
};

#endif /* ChooserInterface_h */
