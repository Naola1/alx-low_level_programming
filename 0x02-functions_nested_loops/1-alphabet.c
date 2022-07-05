#include <stdio.h>
/** main-a function that prints the alphabet, in lower case
 /* followed by new line.
 * Return:success always 0
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
		putchar (i);
	putchar (10);
}
