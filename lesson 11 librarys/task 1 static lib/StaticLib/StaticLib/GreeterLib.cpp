#include "GreeterLib.h"

namespace GreeterLib
{
	std::string Greeter::greeting(std::string name) {
		std::string greeting("Здравствуйте,  !");
		greeting.insert(14, name);
		return greeting;
	}
}
;