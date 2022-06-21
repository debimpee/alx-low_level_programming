#include "main.h"

/**
 * _strchr - a functon that locates a character in a string
 * @s: the string to be searched
 * @c: the character to be located
 *
 * Return: a pointer to the first occurence of the character @c in the
 *         string @s or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
