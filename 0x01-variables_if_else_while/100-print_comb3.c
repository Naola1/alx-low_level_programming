#include <stdio.h>
/**
 *main-function that prints possible combination of two number
 *Return:success always 0 return
 **/
int main(void)
{
	char i;
	int n;

	for (i = 48; i <= 57; i++)
{
	for (n = 49; n <= 57; n++)
	{
		if (n > i)
		{
			putchar (i);
			putchar (n);
		if (i != 56 || i != 57)
		{
			putchar (44);
			putchar (32);
		}
		}
	}
}
		putchar (10);
	return (0);
}
