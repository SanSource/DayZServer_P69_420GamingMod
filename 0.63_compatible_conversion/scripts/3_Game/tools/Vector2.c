// MOOSE MOD START
#include "Scripts/Modified/3_Game/constants.c"
//#include "Scripts/Modified/3_Game/game.c"
// MOOSE MOD END
class Vector2
{	
	void Vector2(float value_x, float value_y)
	{
		x = value_x;
		y = value_y;
	}
	
	float x;
	float y;
};