/*
 * ChooserTypes.hpp
 *
 *  Created on: Oct 5, 2018
 *      Author: justin
 */

#ifndef CHOOSERTYPES_HPP_
#define CHOOSERTYPES_HPP_

#include "Rps_Moves.hpp"
#include "ChooserInterface.hpp"
#include <fstream>
#include <map>
#include <vector>

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
			frequency = stoi(numb_str);

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



#endif /* CHOOSERTYPES_HPP_ */
