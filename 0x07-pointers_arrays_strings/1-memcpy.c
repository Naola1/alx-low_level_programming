#include "main.h"
#include <string.h>
/**
 * _memcpy-copy memeory
 * @dest:destination memory
 * @src:source memeory
 * @n:number of bytes to be copied
 * Return:string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
