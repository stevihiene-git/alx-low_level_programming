#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
lastDigit = n % 10;
if (lastDigit < 6)
{
printf("last digit of %d is %d and is less than 6 and not zero", n, lastDigit);
}
else if (lastDigit > 6)
{
printf("last digit of %d is %d and is greater than 5", n, lastDigit);
}
else
{
printf("last digit of %d is %d and is 0 and is 0", n, lastDigit);
}
return (0);
}
