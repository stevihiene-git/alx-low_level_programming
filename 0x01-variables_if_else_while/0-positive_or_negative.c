#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'this script is to check the use of if-else statements'
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n ; /* Is this a positive or negative number?*/
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive.", n);
}
else if (n < 0)
{
printf("%d is negative.", n);
}
else
{
printf("%d is zero.", n);
}
return (0);
}
