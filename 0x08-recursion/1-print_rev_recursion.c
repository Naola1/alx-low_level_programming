#include "main.h"
/**
 *_print_rev_recursion-printing string reverse with recursion
 *@s:string parameter
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar (10);
		return;
	}
	_print_rev_recursion(s + 1);
	s--;
	_putchar (*s);
}
