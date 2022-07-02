#include <stdio.h>
/**
 *main-function that prints reverse lowercase alphabet by using putchar
 *Return:success always 0 return
 **/
int main(void)
{
	char i;

	for (i = 122; i >= 97; i--)
{
		putchar (i);
}
		putchar (10);
	return (0);
}
