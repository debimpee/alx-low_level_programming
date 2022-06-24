#include "main.h"

/**
 * is_prime_number - prints prime number
 * @n: the number.
 *
 * Return: 1 if @n is a prime number
 *         0 if otherwise
 */
int is_prime_number(int n)
{
	if (n / n == 1 && n / 1 == n)
		return (1);
	else if (n < 1 || n == 1)
		return (0);
	else
		return (0);
}
