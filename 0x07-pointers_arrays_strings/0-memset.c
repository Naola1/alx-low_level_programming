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
	return (memset(s, b, n));
}
