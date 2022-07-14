#include <string.h>
#include "main.h"
/**
 *_strncpy-concatenates n of strings
 *@dest:1st char* parameter
 *@src:2nd char* parameter
 *@n:int parameter
 *Return:string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
