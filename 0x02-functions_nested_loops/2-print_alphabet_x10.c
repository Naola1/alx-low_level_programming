#include "main.h"
/**
 * print_alphabet_x10-printing lowercase alphabet 10x
 * return: success always 0
 **/
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
	for (j = 97; j <= 122; j++)
	{
	_putchar (j);
	}
	_putchar (10);
	}
}
