#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; index < s; index--)
		_putchar(s[index]);
	_putchar('\n');
}
