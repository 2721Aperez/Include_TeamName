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
#include <map>
#include <vector>
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
		std::map<std::string, int> mymap;
		std::string str, numb_str;
		std::ifstream myfile;
		myfile.open("data.txt");

		
		while (myfile)
		{
			getline(myfile, str);
			numb_str = str.substr(str.find(":") + 1);
			str.erase(str.find(":"));
			frequency = stoi(numb_str);
			mymap.insert(std::pair<std::string, int>(str, frequency));
		}
		if(mymap.find(str) == mymap.end()){move = static_cast<moves>(rand() % 3);}





		myfile.close();

		return move;
	}
};

#endif /* ChooserInterface_h */
