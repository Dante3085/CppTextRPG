#pragma once
#include <iostream>
#include "GeneralUtil_PROT.hpp"
#define WINDOWS

namespace GenUtil {

	void pauseProgramm() {
#ifdef WINDOWS
		system("pause");
#endif

#ifndef WINDOWS
		std::cout << "Press Enter to continue . . .";
		std::cin.get();
#endif
	}
}