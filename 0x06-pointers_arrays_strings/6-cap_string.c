#include"main.h"
/**
 *cap_string- capitalizes all words of a string.
 *@s :string prameter
 *Return:uppercas string
 */
char *cap_string(char *s)
{
	int i;
	char sep[13] = {32, 9, '\n', ',', ';', '.', '!', '?',
'"', '(', ')', '{', '}' };

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
		if (s[i] <= sep[13] && s[i] >= sep[0])
		{
			s[i + 1] = s[i + 1] - 32;
		}
		else if (i == 0)
		{
			s[i] = s[i] - 32;
		}
		}

	}
	return (s);
}
