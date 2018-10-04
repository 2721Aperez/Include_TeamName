#include "ChooserFactory.hpp"

ChooserInterface *ChooserFactory::make_chooser(std::string choice)
{
	if (choice == ("random")) { return new RandomChooser(); }
	else if (choice == "smart") { return new SmartChooser(); }
}
