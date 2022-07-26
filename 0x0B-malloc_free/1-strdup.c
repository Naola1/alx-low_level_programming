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
int i = 0;
int len = 0;
char *dest;

len = strlen(str);
	if (str == 0)
		return (NULL);
dest =(char *)malloc(len * (sizeof(char)));
	while (i < 0)
	{
		*(dest + i) = *(str + i);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
