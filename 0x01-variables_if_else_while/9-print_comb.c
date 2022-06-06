#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p = '0';

	for (p = '0'; p <= '9'; p++)
	{
		putchar(p);
			putchar(',');
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
