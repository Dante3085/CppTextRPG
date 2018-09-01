#include <iostream>
#include <string>
#include "Human_PROT.hpp"
#include "GeneralUtil_PROT.hpp"
#include "Menues_PROT.hpp"

/*
General Remarks
----------------
"PROT" = Prototype;
"IMP" = Implementation;
*/

std::string controller;

int main() {

	Human hans;

	hans.setName("Hans");
	hans.setAttributes("age", 20);
	hans.setAttributes("iq", 100);
	hans.setAttributes("height", 1.85);
	
	std::cout << hans.getName() << "\n" <<hans.getAttributes("age") << "\n" << hans.getAttributes("iq") << "\n" << hans.getAttributes("height") << std::endl;
	
	Menues a;

	while (controller != "ExitGame") {

		std::cin >> controller;

		if (controller == "StartMenue") {
			a.showStartMenue();
		}
		else if (controller == "OptionsMenue") {
			a.showOptionsMenue();
		}
	}
	

	GenUtil::pauseProgramm();
	return 0;
}