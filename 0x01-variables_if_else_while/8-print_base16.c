#include <stdio.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = '0';
	char k;

	for (x = '0'; x <= '9'; x++)
	{
	putchar(x);
	}
	for (k = 'a'; k <= 'f'; ++k)
	{
	putchar(k);
	}
	putchar('\n');

	return (0);
}
