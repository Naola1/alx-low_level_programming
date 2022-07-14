#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strcat-concatenates two strings.
 *@dest:first string parameter
 *@src:second string parameter
 *Return:string
 */
char *_strcat(char *dest, char *src)
{
	int i, len1 = 0, len2 = 0;

	len1 = strlen(dest);
	len2 = strlen(src);
	for (i = 0; i <= len2; i++)
	{
		if (i == len1)
		{
			dest[i] = ' ';
		}
		printf("%s", dest);
	}
	return (dest);
}
