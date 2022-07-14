#include"main.h"
/**
 *cap_string-lowercase to uppercase converter
 *@s :string prameter
 *Return:uppercas string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			s[i] = s[i] + 32;
		}

	}
	return (s);
}
