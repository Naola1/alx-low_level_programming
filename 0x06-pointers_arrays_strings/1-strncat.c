#include <string.h>
#include "main.h"
/**
 *_strncat-concatenates n of strings
 *@dest:1st char* parameter
 *@src:2nd char* parameter
 *@n:int parameter
 *Return:string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
