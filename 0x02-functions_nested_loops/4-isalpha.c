#include "main.h"
/**
 * _isalpha - Check for alphabet
 * @c:ASCII code
 * Return:success always 1
 **/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar (10);
}
