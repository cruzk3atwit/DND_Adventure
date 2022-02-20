#pragma once
#include "Dice_Set.h"

class Gnoll
{

	//Battle Stats
	int health = 22;
	int ac = 15;
	int initiative; 

	//Attribute Modifiers
	const int STR = 2;
	const int DEX = 1;
	const int CON = 0;
	const int INT = -2;
	const int WIS = 0;
	const int CHA = -2;

	//Damage
	int hit_modifier = 4;

};

