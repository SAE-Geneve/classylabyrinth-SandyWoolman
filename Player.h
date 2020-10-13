#pragma once
#include <iostream>
#include "Character.h"

class Player : public Character {
	public:
		Player();
		std::string name = "Bob";
		int get_health_points();
		int get_attack();
		int get_defence();
		int get_x();
		int get_y();
		int get_player();
		void Print();

		int max_health_points;
		int experience_points;
		int health_regen;
};