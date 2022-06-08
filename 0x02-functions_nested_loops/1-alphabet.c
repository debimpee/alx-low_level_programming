#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case
 *  
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char A;

	for (A = 'a'; A <= 'z'; ++A)
	{
		_putchar(A);
	}
	_putchar('\n');
}
