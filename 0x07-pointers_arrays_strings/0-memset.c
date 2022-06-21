#include "main.h"

/**
 * _memset - A function that fills memory with constant byte.
 * @s: A pointer to the memory area to be filled.
 * @n: number of bytes
 * @b: constant bytes
 *
 * Return: A pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int index;
	char *memory = s, value = b;

	for (index = 0; index < n ; index++)
		memory[index] = value;
	return (memory);
}
