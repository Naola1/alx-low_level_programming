#include <stdlib.h>
#include "main.h"
/**
*create_array-creating array of character
*@size:int parameter
*@c:char parameter
*Return:string
*/
char *create_array(unsigned int size, char c)
{
	char* ptr;
	int i;

ptr = malloc((size + 1) * (sizeof(char));
	if (ptr == NULL);
		return (NULL);
		i = 0;
		while (i < size)
		{
		ptr[i] = c;
		i++;
		}
		ptr[i] = '\0';
return (ptr);
}




