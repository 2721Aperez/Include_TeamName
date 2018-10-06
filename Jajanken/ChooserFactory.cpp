#include "ChooserFactory.hpp"
#include "ChooserTypes.hpp"

ChooserInterface *ChooserFactory::make_chooser(std::string choice)
{
	if (choice == ("random")) { return new RandomChooser(); }
	else if (choice == "smart") { return new SmartChooser(); }
	else { return new RandomChooser(); }
}
