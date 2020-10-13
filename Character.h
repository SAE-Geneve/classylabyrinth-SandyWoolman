#pragma once
#include <iostream>

class Character {
public:

	Character();
	int health_points;
	int attack;
	int defence;
	int x;
	int y;

	int GetHealthPoints();
	int GetAttack();
	int GetDefence();
	int Get_X();
	int Get_Y();

protected:
	int health_points_;
	int attack_;
	int defence_;
	int x_;
	int y_;
};