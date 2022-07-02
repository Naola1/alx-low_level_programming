#include <stdio.h>
/**
 *main-function that prints hexadecimal by using putchar
 *Return:sukccess always 0 return
 **/
int main(void)
{
	char i;
	int n;

	for (n = 48; n <= 57; n++)
{
		putchar (n);
}
for (i = 'a'; i <= 'f'; i++)
{
	putchar (i);
}
putchar (10);
	return (0);
}
