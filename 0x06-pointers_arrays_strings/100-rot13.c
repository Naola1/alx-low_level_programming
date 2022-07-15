#include "main.h"
/**
 * rot13-encoding
 * @s:string parameter
 * Return:string
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 97 && s[i] <= 122) &&
(s[i] >= 65 && s[i] <= 90))
				{
				s[i] = s[i] - 13;
				}
	}
	return (s);
}
