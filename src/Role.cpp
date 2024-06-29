#include "../include/Role.h"

Role::Role()
{
	name = "Unknown Role";
	allignment = "Unknown Allignment";
	description = "Unknown Description";
}

Role::Role(std::string n, std::string a, std::string d) : name(n), allignment(a), description(d){}

std::string Role::getName()
{
	return name;
}

std::string Role::getAllignment()
{
	return allignment;
}

std::string Role::getDescription()
{
	return description;
}
