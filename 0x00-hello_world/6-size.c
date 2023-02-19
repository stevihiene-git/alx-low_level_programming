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
int int_Type;
float float_Type;
double double_Type;
char char_Type;
long long longLongType;
/*sizeof evaluates the size of a variable*/
printf("Size of int: %zu bytes\n", sizeof(int_Type));
printf("Size of float: %zu bytes\n", sizeof(float_Type));
printf("Size of double: %zu bytes\n", sizeof(double_Type));
printf("Size of char: %zu byte\n", sizeof(char_Type));
printf("Size of long long int: %lld byte(s)\n", sizeof(longLongType));
return (0);
}
