#include <stdio.h>
#include <time.h> 
#include <stdlib.h>
#include "main.h"
/**
 * positive_or_negative-function that tells 0-positive_or_negative
 * @i:integer parameter
 * return:void
 */
void positive_or_negative(int i)
{
	int n;  
	srand(time(0)); 
	n = i; 
	if (n > 0) 
		printf("%d is positive\n", n); 
	else if (n < 0)
		printf("%d is negative\n", n); 
	else
		printf("%d is zero\n", n); 
}
/**
 * main - test function that prints if integer is postive or negative
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);
	return (0);
	}
