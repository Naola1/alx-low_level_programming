#include"main.h"
/**
 *string_toupper-lowercase to uppercase converter
 *@char*:string
 *Return:uppercas string
 */
char *string_toupper(char *s)
{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
		{
			s[i] = s[i] - 32;
		}
	}
}
