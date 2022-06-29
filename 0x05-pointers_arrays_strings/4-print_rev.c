#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	while (*s)
		_putchar(*s--);
	_putchar('\n');
}
