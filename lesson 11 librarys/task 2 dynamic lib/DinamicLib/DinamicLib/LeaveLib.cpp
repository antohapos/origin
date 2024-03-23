#include "LeaverLib.h"

namespace LeaverLib
{
	std::string Leave::leave(std::string name) {
		std::string leave("До свидания,  !");
		leave.insert(14, name);
		return leave;
	}
};