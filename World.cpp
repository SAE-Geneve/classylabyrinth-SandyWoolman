#include <iostream>
#include "World.h"

/*world::world() {
	get_tile_at_position();
	get_enemy();
	set_player();
	xy_local();
	local_player();
}*/

int world::get_tile_at_position(int x, int y)
{
	return 0;
}

int world::get_enemy(int x, int y)
{
	return 0;
}

int world::set_player(int x, int y)
{
	return 0;
}


int world::xy_local(int x, int y)
{
	// We want the local array to be bound to the borders.
	if (x < 0) x = 0;
	if (x > 23) x = 23;
	if (y < 0) y = 0;
	if (y > 7) y = 7;
	// Return the position within the local world of the cursor.
	// As the array is singular dimention we use the largest value to
	// split it.
	return x + y * 24;
}

int world::local_player()
{
	return 0;
}



/*Player get_player()
{
	return world::local_player;
}
*/