#include "main.h"
/**
 *_print_rev_recursion-printing string reverse with recursion
 *@s:string parameter
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar (*s);
}
