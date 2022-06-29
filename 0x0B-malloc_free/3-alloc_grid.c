#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - turns a pointer to a 2 dimensional array of integers.
 * @width: width of the 2 dimensional array.
 * @height: length of the 2 dimensional array.
 *
 * Return: NULL on failure
 *         NULL if width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int width_index, height_index;

	if (width <= 0 || height <= 0)
		return (NULL);
	twoD = malloc(sizeof(int *) * height);
	if (twoD == NULL)
		return (NULL);
	for (height_index = 0; height_index < height; height_index++)
	{
		twoD[height_index] = malloc(sizeof(int) * width);
		if (twoD[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
				free(twoD[height_index]);
			free(twoD);
			return (NULL);
		}
	}
	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width_index++)
			twoD[height_index][width_index] = 0;
	}
	return (twoD);
}

