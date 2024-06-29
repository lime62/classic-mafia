#include "../include/Setup.h"

Setup::Setup()
{
	name = "Unknown";
}

Setup::Setup(std::string n)
{
	name = n;
}

void Setup::initializeSetup()
{
	//Role can be broken down into name, allignment, wincondition and night action
	Role Villager("Villager", "Town", "Wins when all mafia dies.");
	Role Mafioso("Mafioso", "Mafia", "Picks a player at night to kill. Wins when they have majority over the town.");
	Role Cop("Cop", "Town", "Picks a player at night to investigate their allignment. Wins with town.");
	Role Doctor("Doctor", "Town", "Picks a player at night to save. Wins with town.");

	// Adding the vanilla town
	setup_list.push_back(Villager);
	setup_list.push_back(Villager);
	setup_list.push_back(Villager);

	// Adding the power-roles
	setup_list.push_back(Cop);
	setup_list.push_back(Doctor);

	// Adding the mafia
	setup_list.push_back(Mafioso);
	setup_list.push_back(Mafioso);
}

void Setup::displaySetup()
{
	for (auto& role : setup_list) {
		std::cout << role.getName();
		std::cout << role.getAllignment();
		std::cout << role.getDescription();
	}
}

