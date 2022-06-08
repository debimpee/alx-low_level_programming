#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lower case 10 times
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	char n, times;

	times = 0;

	while (times < 10)
	{
		for (n = 'a'; n <= 'z'; ++n)
		{
			_putchar(n);
		}
		times++;
		_putchar('\n');
	}
}
