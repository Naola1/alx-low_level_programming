#include <stdio.h>
/**
 *main-function that prints lowercase alphabet by using putchar
 *Return:success always 0 return
 **/
int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
{
		putchar (i);
}
		putchar (10);
	return (0);
}
