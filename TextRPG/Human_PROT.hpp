#pragma once
#include <iostream>

class Human {
private:
	int age, iq;
	double height;
	std::string name;
public:
	double getAttributes(std::string attribute);
	void setAttributes(std::string attribute, double value);
	std::string getName();
	void setName(std::string value);
};