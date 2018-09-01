#pragma once
#include "Human_PROT.hpp"

double Human::getAttributes(std::string attribute) {
	if (attribute == "age") {
		return age;
	}
	else if (attribute == "iq") {
		return iq;
	}
	else if (attribute == "height") {
		return height;
	}
}

void Human::setAttributes(std::string attribute, double value) {
	if (attribute == "age") {
		age = value;
	}
	else if (attribute == "iq") {
		iq = value;
	}
	else if (attribute == "height") {
		height = value;
	}
}

std::string Human::getName() {
	return name;
}

void Human::setName(std::string value) {
	name = value;
}