#include "main.h"
/**
 *_puts_recursion-printing string recursively
 *@s:string parameter
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (10);
		return;
	}
	_putchar (*s);
	s++;
	_puts_recursion(s);
}
