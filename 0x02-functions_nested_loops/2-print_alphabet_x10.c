#include <stdio.h>
/**
 * main-a function that calls print_alphabet_x10
 *print_alphabet_x10-a function taht prints 10x the lowercase alphabet
 * Return:success always 0
 **/
void print_alphabet_x10(void);
int main(void)
{
	print_alphabet_x10();
	return (0);
}
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			putchar (j);
		}
		putchar (10);
	}
}
