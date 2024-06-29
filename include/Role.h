#ifndef ROLE_H
#define ROLE_H

#include <string>
class Role
{
private:
	std::string name;
	std::string allignment;
	std::string description;
public:
	Role();
	Role(std::string n, std::string a, std::string d);
	std::string getName();
	std::string getAllignment();
	std::string getDescription();
};

#endif