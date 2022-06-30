#include "main.h"

/**
 * _strlen -  returns the length of a string.
 * @s: the string whose length is to be returned.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
