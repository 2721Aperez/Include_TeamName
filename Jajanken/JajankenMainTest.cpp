#include "Player.hpp"
#include "Computer.hpp"
#include "GameResults.hpp"
#include "Rps_Moves.hpp"
#include "RockPaperScissor.hpp"

int main()
{
	Player player;
	Computer computer;
	RockPaperScissor game;
	char choice;
//	Rps_Moves player_choice;

	std::cout << "Would you like to see the rules? (Y) (N)" << std::endl;
	std::cin >> choice;

	if(toupper(choice) == 'Y')
	{
		game.displayRules();
	}

	std::cout<<"Play Rock Paper Scissors? (Y) (N)" << std::endl;
	std::cin >> choice;

	if(toupper(choice) =='Y')
	{
		std::cout << "Select A B or C" << std::endl;
		std::cout << "A) Rock " << std::endl;
		std::cout << "B) Paper " << std::endl;
		std::cout << "C) Scissors " << std::endl;
		std::cin >> choice;
		toupper(choice);

		switch(choice)
		{
		case 'A':
			player.selectMove(Rps_Moves::ROCK);
		break;

		case 'B':
			player.selectMove(Rps_Moves::PAPER);
		break;

		case 'C':
			player.selectMove(Rps_Moves::SCISSORS);
		break;

		default: std::cout << "Not a Valid Option" <<std::endl;
		break;

		}
		computer.selectMove();
		game.compareMoves(player.getMove(), computer.getMove());
 

	}
	else
	{
		std::cout<<"Goodbye" << std::endl;
		return 0;
	}

	return 0;

}
