#include"main.h"
/**
 *cap_string- capitalizes all words of a string.
 *@s :string prameter
 *Return:uppercas string
 */
char *cap_string(char *s)
{
	char sep[13] = {32, 9, '\n', ',', ';', '.', '!', '?',
'"', '(', ')', '{', '}' };
	int i, a = 0;
	int len = 13;

	while (s[i])
	{
		i = 0;

		while (i < len)
		{
			if ((a == 0 || s[a - 1] == sep[i]) &&
(s[a] >= 97 && s[a] <= 122))
			s[a] = s[a] - 32;
			i++;
		}
			a++;
	}
	return (s);
}
