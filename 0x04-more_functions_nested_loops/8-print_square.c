#include "main.h"

/**
 * print_square - print a square of #'s given size
 * @size: size to draw
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < sire; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
