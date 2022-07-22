#include<stdio.h>
/**
 *print_name-program that prints its name
 *@argc:integer parameter
 *@argv:1D array parameter
 *Return:0 always success
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}



