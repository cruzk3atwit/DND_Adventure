#pragma once
#include <String>
class player
{
	//Battle Stats
	int health;
	int ac;
	int initiative;

	//Attribute Modifiers
	int STR;
	int DEX;
	int CON;
	int INT;
	int WIS;
	int CHA;

	//Damage
	int hit_modifier;

	std::string Player_Class;

private: void pick_class(int choice) {

	if (choice == 1) {
		STR = 3;
		DEX = 2;
		CON = 2;
		INT = 1;
		WIS = 0;
		CHA = -1;

		hit_modifier = 6;
		health = 67;

		Player_Class = "Barbarian";
	}

	else if (choice == 2) {
		STR = 3;
		DEX = 3;
		CON = 2;
		INT = 1;
		WIS = 0;
		CHA = -1;

		hit_modifier = 8;
		health = 45;

		Player_Class = "Ranger";
	}


}
};

