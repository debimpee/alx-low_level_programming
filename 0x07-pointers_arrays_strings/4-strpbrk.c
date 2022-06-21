#include "main.h"

/**
 * _strpbrk - searches the string for any of a set of bytes
 * @s: string to be searched
 * @accept: set of bytes to be searched for.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in @accept
 *          or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;
	unsigned int bytes = 0;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == index)
				return (s);
		}
		s++;
	}
	return ('\0');
}
