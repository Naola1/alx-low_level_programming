#include <stdio.h>
/**
 *main-function that prints possible combination of two number
 *Return:success always 0 return
 **/
int main(void)
{
	int i;
	int n;

	for (i = 48; i <= 57; i++)
{
	for (n = 49; n <= 57; n++)
	{
		if (n > i)
		{
			putchar (i);
			putchar (n);
		if (i != 56)
		{
			putchar (44);
			putchar (32);
		}
		}
	}
}
	return (0);
}
