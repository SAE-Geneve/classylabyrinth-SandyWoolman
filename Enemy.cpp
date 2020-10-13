#include <iostream>
#include "Enemy.h"

Enemy::Enemy() : Character(),
name ("Gob"),
max_health_points(50)
{
}

int Enemy::get_health_points()
{
	return health_points;
}

int Enemy::get_attack()
{
	return attack;
}

int Enemy::get_defence()
{
	return defence;
}

int Enemy::get_x()
{
	return x;
}

int Enemy::get_y()
{
	return y;
}

int Enemy::get_enemy()
{
	return 0;
}

void Enemy::Print()
{
}
