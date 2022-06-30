#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: the string that appears first
 * @src: the strings that comes after @dest
 *
 * Return: A pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
