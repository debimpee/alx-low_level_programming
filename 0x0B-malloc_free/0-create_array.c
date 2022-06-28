#include "main.h"

/**
 * create_array - creates an array of chars and
 *                initializes it with a specific char
 * @size: the size of the array to be initialised.
 * @c: The specific char to initialize the array with.
 *
 * Return: NULL if size == 0 or function fails.
 *         a pointer to the array otherwise.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == 0)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);
}
