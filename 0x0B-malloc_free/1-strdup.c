#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *           which contains a copy of the string given as a parameter
 * @str: The string to be duplicated.
 *
 * Return: NULL if str == NULL
 *         NULL if insufficient memory was available.
 *         a pointer to the duplicated string otherwise.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == 0)
		return (NULL);
	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];
	duplicate[len] = '\0';
	return (duplicate);
}
