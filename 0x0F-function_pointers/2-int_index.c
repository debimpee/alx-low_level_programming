#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @arrray: The array
 * @size: is the number of elements in the array @array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: returns the index of the first element for which the cmp function
 *         does not return 0
 *         -1 if no element matches.
 *         -1 if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
