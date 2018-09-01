#pragma once
#include <iostream>
#include "ConsoleUtil_PROT.hpp"
#include "Menues_PROT.hpp"

void Menues::showStartMenue() {
	ConUtil::writeTextlinePos("                                                      ", 0, 0, 0);
	ConUtil::writeTextlinePos("                                                      ", 0, 0, 1);
	ConUtil::writeTextlinePos("                                                      ", 0, 0, 2);
	ConUtil::writeTextlinePos("                                                      ", 0, 0, 3);
	ConUtil::writeTextlinePos("                                                      ", 0, 0, 4);
	ConUtil::writeTextlinePos("                                                      ", 0, 0, 5);

	ConUtil::setCursorXY(0, 0);
	std::cout << "1.StartGame\n";
	std::cout << "2.Options\n";
	std::cout << "3.ExitGame\n";
}

void Menues::showOptionsMenue() {
	ConUtil::writeTextlinePos("                                                      ", 0, 0, 0);
	ConUtil::writeTextlinePos("                                                      ", 0, 0, 1);
	ConUtil::writeTextlinePos("                                                      ", 0, 0, 2);
	ConUtil::writeTextlinePos("                                                      ", 0, 0, 3);
	ConUtil::writeTextlinePos("                                                      ", 0, 0, 4);
	ConUtil::writeTextlinePos("                                                      ", 0, 0, 5);

	ConUtil::setCursorXY(0, 0);
	std::cout << "Options...\n";
}