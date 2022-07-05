#include <unistd.h>
#include "main.h"
/**
 * main - a function that calls print_alphabet
 * print_alphabet - a function that prints lowercase alphabet
 * Result : success always 0
 **/
void print_alphabet(void);
int main(void)
	{
	print_alphabet();
	return (0);
	}
/*print_alphabet - a function that prints lowercase alphabet.*/
void print_alphabet(void)
	{
	int i;

	for (i = 97; i <= 122; i++)
		putchar (i);
	putchar (10);
	}


