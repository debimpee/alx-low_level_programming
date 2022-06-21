#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to be searched
 * @accept: the prefix to be measured.
 *
 * Return: the number of bytes in the initial segment of @s
 *         which consist only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int index;
	unsigned int bytes = 0;

	while (*s)
	{
		for (index = 0; s[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
