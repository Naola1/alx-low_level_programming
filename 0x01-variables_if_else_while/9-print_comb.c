#include <stdio.h>
/**
 *main-function that prints possible combination of two number
 *Return:success always 0 return
 **/
int main(void)
{
	char i;

	for (i = 48; i <= 57; i++)
{
		putchar (i);
		if (i != 57)
		{
			putchar (44);
			putchar (32);
		}
}
		putchar (10);
	return (0);
}
