#include "GreeterLib.h"

namespace GreeterLib
{
	std::string Greeter::greeting(std::string name) {
		std::string greeting("������������,  !");
		greeting.insert(14, name);
		return greeting;
	}
}
;