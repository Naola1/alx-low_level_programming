#include "main.h"
/**
 * leet-a function that encodes a string
 * @s:string parameter
 * Return:string
 */
char *leet(char *s)
{
	int i, a = 0, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		i = 0;

		while (i < l)
		{
			if (s[a] == tr[i] || s[a] - 32 == tr[i])
				s[a] = trw[i];
					i++;
		}
		a++;
	}
	return (s);
}
