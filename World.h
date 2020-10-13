#pragma once
#include <iostream>
#include <map>
#include "Enemy.h"
#include "Player.h"

enum class TileType : char
{
	BLOCK = '#',
	EMPTY = '.',
	ENEMY = 'E',
	PLAYER = 'P',
};

enum class CommandType
{
	QUIT,
	NORTH,
	SOUTH,
	EAST,
	WEST,
	ATTACK,
	HELP,
};


class world {
	public:
		world();
		int get_tile_at_position(int x, int y);
		std::map<std::pair<int, int>, Enemy> local_enemy;
		int get_enemy(int x, int y);
		int set_player(int x, int y);
		int xy_local(int x, int y);
		int local_player();
		int local_world();


	protected:

			// Map of the local space.
			std::string local_world =

			"########################" // 24 * 8
			"#.....E......E.....#..P#" // P is at (22, 1)
			"#######..#####..####...#"
			"#........#.............#"
			"#.E......#...E...E.....#"
			"#..##################..#"
			"#.........E............#"
			"########################";

};
void set_enemy(Enemy enemy, int x, int y);
Enemy get_enemy(int x, int y);

void set_player(Player player);
Player get_player();
