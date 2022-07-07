#include "main.h"
/**
 *print_triangle-printng triangle.
 *@size: num of lines
 *Return:void
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
			_putchar(32);
		for (j--; j < size; j++)
			_putchar(35);
		if (i < (size - 1))
			_putchar(10);
	}
	_putchar(10);
}

