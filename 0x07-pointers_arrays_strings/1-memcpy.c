#include "main.h"
/**
 * _memcpy-copy memeory
 * @dest:destination memory
 * @src:source memeory
 * @n:number of bytes to be copied
 * Return:string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
