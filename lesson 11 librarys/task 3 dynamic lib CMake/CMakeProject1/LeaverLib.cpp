#include "LeaverLib.h"

namespace LeaverLib
{
	std::string Leave::leave(std::string name) {
		std::string leave("�� ��������,  !");
		leave.insert(14, name);
		return leave;
	}
};