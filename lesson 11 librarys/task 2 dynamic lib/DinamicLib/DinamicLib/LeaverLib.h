#pragma once
#ifdef LEAVERLIB_EXPORTS
#define LEAVERLIB_API __declspec(dllexport)
#else
#define LEAVERLIB_API __declspec(dllimport)
#endif

#include <string>


namespace LeaverLib
{
	class Leave
	{
	public:
		LEAVERLIB_API std::string leave(std::string name);
	};
}