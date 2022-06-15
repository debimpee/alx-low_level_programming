#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle.
 */
void print_triangle(int size)
{
	int space, side;

	if (size > 0)
	{
		for (space = 0; space < size; space++)
			_putchar(' ');
		for (side = 0; side < space; side++)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
