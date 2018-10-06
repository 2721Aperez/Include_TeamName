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
		std::multimap<std::string, int> mymap;
		std::multimap<std::string, int>::iterator it;
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
		if(mymap.find(list) == mymap.end()){move = static_cast<moves>(rand() % 3);}
		else
		{
			int freq = 0;
			for (it = mymap.begin(); it != mymap.end(); it++)
			{
				if(it ->first == list)
				{
					freq = (freq < it->second) ? it->second:freq;
				}
			}

		}

		myfile.close();

		return move;
	}
};



#endif /* CHOOSERTYPES_HPP_ */
