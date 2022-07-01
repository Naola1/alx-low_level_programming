#include <stdio.h>
/**
 *main - function that prints lowercase alphabet by using putchar
 *Return:success always 0 return
 **/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)

		putchar (i);
		putchar (10);
	return (0);
}
