#include <stdio.h>
#include <time.h>
/**
 *main:a function that tells 0-positive_or_negative
 *Return success always zero
 **/
int main(void)
{
int n;
strand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
