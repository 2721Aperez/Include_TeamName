#include "Computer.hpp"

Computer::Computer() {}

void Computer::generateMove(std::string setting)
{
	moves rps_move;
	ChooserFactory move_type;
	ChooserInterface *choose_type;

	choose_type = move_type.make_chooser(setting);

	rps_move = choose_type->selectMove();

	Player::setMove(rps_move);
}

moves Computer::getMove()const
{
	moves move;
	return move = Player::getMove();
}
