#include<stdlib.h>
#include<string.h>
#include"main.h"
/**
 *_strdup-function that returns a pointer to a newly
 * allocated space in memory,  * which contains a
 * copy of the string given as a parameter.
 * @str:string parameter
 * Return:string
 */
char *_strdup(char *str)
{
int i, len;
char *dest;

len = strlen(str);
	if (str == 0)
		return (NULL);
dest = malloc(len * (sizeof(char)) + 1);
	while (i >= 0)
	{
		*(dest + i) = *(str + i);
		if (*(str + i) == '\0')
			break;
		i++;
	}
	return (dest);
}
