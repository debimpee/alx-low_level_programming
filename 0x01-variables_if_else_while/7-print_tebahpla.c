#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; ++k)
	{
	putchar(rev(k));
	}
	putchar('\n');
	
	return (0);
}
