#include "ChooserInterface.hpp"

class ChooserFactory
{
public:

	static ChooserInterface *make_chooser(std::string);

};
