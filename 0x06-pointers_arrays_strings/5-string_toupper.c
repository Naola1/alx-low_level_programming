#include"main.h"
/**
 *string_toupper-lowercase to uppercase converter
 *@x :string prameter
 *Return:uppercas string
 */
char *string_toupper(char *x)
{
	int i;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x[i] - 32;
			i++;

	}
	return (x);
}
