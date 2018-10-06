#include "Computer.hpp"

Computer::Computer() {}



void Computer::generateMove()
{

}

void Computer::setInterface(std::string choice)
{
	*ChooserFactory::make_chooser(choice);
}

