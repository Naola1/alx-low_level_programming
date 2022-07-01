#include <stdio.h>
/**
 * main-a function that prints alphabet
 * Return:success always 0
 **/
int main(void)
		{
	char i;

	for (i = 'a'; i <= 'z'; i++)
{
	if (i != 'q' && i != 'e')
	{
		putchar (i);
	}
}
putchar (10);
return (0);
}
