#ifndef RPS_MOVES_H_
#define RPS_MOVES_H_
#include "boost/assign/list_of.hpp"
#include "boost/assert.hpp"
#include <map>
#include <iostream>

using namespace boost::assign;

enum class Rps_Moves
{
    ROCK, PAPER, SCISSORS,
};

inline std::ostream& operator <<(std::ostream& ostr, const Rps_Moves rps_move)
{
    switch (rps_move)
    {
        case Rps_Moves::ROCK:		std::cout << "Rock";				break;
        case Rps_Moves::PAPER: 		std::cout << "Paper";  				break;
        case Rps_Moves::SCISSORS:	std::cout << "Scissors";            break;

        default:                    std::cout << "unspecified";
    }

    return ostr;
}

#endif
