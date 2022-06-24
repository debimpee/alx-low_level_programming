#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number
 *
 * Return: natural square root of n
 *         -1 if n does does not have natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion(n));
}
