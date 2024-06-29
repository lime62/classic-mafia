#ifndef SETUP_H
#define SETUP_H

#include <iostream>
#include <string>
#include <vector>
#include "Role.h"

class Setup
{
	std::string name;
	std::vector <Role> setup_list;
public:
	Setup();
	Setup(std::string n);
	void initializeSetup();
	void displaySetup();
};

#endif