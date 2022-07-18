#include "main.h"
/**
 * _memset-function that fills memory with a constant byte
 * @s:string parameter
 * @b:char parameter
 * @n:unsigned int parameter
 * Return:string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = 'b';
	}
	return (s);
}
