#include "main.h"

/**
 * is_prime_number - checks if it is a prime number
 * @n: the number to be checked.
 *
 * Return: 1 if @n is a prime number
 *         0 if otherwise
 */
int is_prime_number(int n)
{
	if (n < 1 || n == 1)
		return (0);
	if (n / n == 1 && n / 1 == n)
		return (1);
}
