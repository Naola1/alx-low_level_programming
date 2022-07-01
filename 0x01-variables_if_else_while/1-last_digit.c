#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-a function that tells the last digit of the random number
 * and also wether it is greater than, 5 less than 6 or zero
 * Return:success always 0
 **/
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
		printf("is %d and is greater than 5", last_digit);
	else if (last_digit < 6 && last_digit != 0)
		printf("is %d and less than 6 and not 0", last_digit);
	else
		printf("is %d and is 0", last_digit);
	return (0);
}
