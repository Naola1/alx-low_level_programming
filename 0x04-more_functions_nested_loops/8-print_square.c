#include "main.h"
/**
 * print_square-print_square
 * @size:integer parameter
 * Return:void
 */
void print_square(int size)
	{
	int i, j;

	for (i = 0; i < size; i++)
		{
		for (j = 0; j < size; j++)
			{
			_putchar(35);
			}
		if (i != size - 1)
			_putchar(10);
		}
		_putchar(10);
	}

