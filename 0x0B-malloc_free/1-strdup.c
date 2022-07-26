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
int i = 1;
int j = 0;
char *s;

	if (str == 0)
		return (NULL);
	while (str[i])
		i++;
s = (char *)malloc(i * sizeof(char) + 1);
	if (s == 0)
		return (NULL);
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[i] = '\0';
	return (s);
}
