#include <stdio.h>
/**
 * main-a function that prints different combination of three digits
 * Return:success always 0
 **/
int main(void)
{
	int i, j, n;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			for (n = 50; n <= 57; n++)
			{
				if (i < j && j < n)
				{
					putchar (i);
					putchar (j);
					putchar (n);
				if (i != 55)
				{
					putchar (44);
					putchar (32);
				}
				}
			}
		}
	}
	putchar (10);
	return (0);
}
