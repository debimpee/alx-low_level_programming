#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s:The string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar('\n');
	}
}
