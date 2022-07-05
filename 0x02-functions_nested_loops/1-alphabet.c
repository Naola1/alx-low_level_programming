#include <unistd.h>
#include "main.h"
/**
 * main-calling function
 * print_alphabet - prints lowercase alphabet
 * Result : success always 0
 **/
void print_alphabet(void);
int main(void)
	{
	print_alphabet();
	return (0);
	}
void print_alphabet(void)
	{
	char i;

	for (i = 97; i <= 122; i++)
		_putchar (i);
	_putchar (10);
	}


