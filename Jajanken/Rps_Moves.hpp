#ifndef RPS_MOVES_H_
#define RPS_MOVES_H_

#include <iostream>


enum moves
{
    ROCK, PAPER, SCISSORS,
};

inline std::ostream& operator <<(std::ostream& ostr, const moves rps_move)
{
    switch (rps_move)
    {
        case ROCK:		std::cout << "Rock";				break;
        case PAPER: 		std::cout << "Paper";  				break;
        case SCISSORS:	std::cout << "Scissors";            break;

        default:                    std::cout << "unspecified";
    }

    return ostr;
}

#endif
