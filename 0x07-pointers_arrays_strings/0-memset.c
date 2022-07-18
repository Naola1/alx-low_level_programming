#include "main.h"
#include <string.h>
/**
 * _memset-function that fills memory with a constant byte
 * @s:string parameter
 * @b:char parameter
 * @n:unsigned int parameter
 * Return:string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
