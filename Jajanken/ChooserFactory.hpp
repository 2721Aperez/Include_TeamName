#include "ChooserInterface.hpp"
#include "ChooserTypes.hpp" 

class ChooserFactory
{
public:

	static ChooserInterface *make_chooser(std::string);

};
