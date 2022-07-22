#include<stdio.h>
/**
 *print_name-program that prints its name
 *@argc:integer parameter
 *@argv:1D array parameter
 *Return:0 always success
 */
int print_name(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}



