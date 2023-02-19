#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the use of sizeOf() function'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long int longType;
long long longLongType;
float floatType;
/*sizeof evaluates the size of a variable*/
printf("Size of a char:%zu byte(s)\n", sizeof(charType));
printf("Size of an int:%d byte(s)\n", sizeof(intType));
printf("Size of a long int:%zu byte(s)\n", sizeof(longType));
printf("Size of a long long int:%zu byte(s)\n", sizeof(longLongType));
printf("Size of a float:%zu byte(s)\n", sizeof(floatType));
return (0);
}
