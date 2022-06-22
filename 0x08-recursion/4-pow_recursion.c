#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: a number
 * @y: a number
 *
 * Return: value of x raised to the power of y if y > 0
 *         -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y));
}
