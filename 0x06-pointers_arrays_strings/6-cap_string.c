#include"main.h"
/**
 *cap_string- capitalizes all words of a string.
 *@s :string prameter
 *Return:uppercas string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '.')
		{
			s[i + 1] = s[i + 1] - 32;
		}
		else if (s[i] == 0)
		{
			s[i] = s[i] - 32;
		}

	}
	return (s);
}
