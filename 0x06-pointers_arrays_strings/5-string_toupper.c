#include"main.h"
/**
 *string_toupper-lowercase to uppercase converter
 *@s :string prameter
 *Return:uppercas string
 */
char *string_toupper(char *s)
{
	int i;

	while (s[i])
	{
		if (s[i] <= 'z' && s[i] >= 'a')
		{
			s[i] = s[i] - 32;
			i++;
		}
	}
	return (s);
}
