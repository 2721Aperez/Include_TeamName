#pragma once
#include "ChooserInterface.hpp"

class ChooserFactory
{
public:
	ChooserInterface *make_chooser(std::string);
};