#pragma once
#include <iostream>
#include "Character.h"

class Enemy : public Character {
public:
	Enemy();
	std::string name;
	int get_health_points();
	int get_attack();
	int get_defence();
	int get_x();
	int get_y();
	int get_enemy();
	void Print();

protected:
	int max_health_points;
};