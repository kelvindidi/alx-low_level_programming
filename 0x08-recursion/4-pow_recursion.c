#include <stdio.h>

/**
* pow_recursion - returns the value of x raised to the power of y
* @x: integer to be raised to power
* @y: the power
*/
int pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * pow_recursion(x, y - 1));
}
