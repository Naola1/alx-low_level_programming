#include "main.h"
/**
 *print_most_numbers-prints 0-9 except 2&&4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar (i);
		}
		_putchar (10);
	}
}
