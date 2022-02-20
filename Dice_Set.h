#pragma once
#include <iostream>

class Dice_Set
{
	int roll;

public: int d4(){
		roll = (rand() % 4) + 1;
		return roll;
	}

public: int d6() {
		roll = (rand() % 6) + 1;
		return roll;
	}

public: int d8() {
		roll = (rand() % 8) + 1;
		return roll;
	}

public: int d10() {
		roll = (rand() % 10) + 1;
	}

public: int d12() {
		roll = (rand() % 12) + 1;
		return roll;
	}

public: int d20() {
		roll = (rand() % 20) + 1;
	}

public: int d100() {
		roll = (rand() % 100) + 1;
	}
};

