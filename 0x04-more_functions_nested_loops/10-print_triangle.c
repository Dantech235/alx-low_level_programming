#include "main.h"

/**
 * print_triangle - entry point
 * Description: print a triangle
 * @size: size of the triangke
 * Return: void
 */

void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces++)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= size; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
