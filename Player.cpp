#include <iostream>
#include "Player.h"

Player::Player() : Character(),
name("Bob"),
max_health_points(100),
experience_points(0),
health_regen(5)
{
}

int Player::get_health_points()
{
	return health_points;
}

int Player::get_attack()
{
	return attack;
}

int Player::get_defence()
{
	return defence;
}

int Player::get_x()
{
	return x;
}

int Player::get_y()
{
	return y;
}

int Player::get_player()
{
	return 0;
}

void Player::Print()
{
}
