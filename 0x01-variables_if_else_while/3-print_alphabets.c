#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'concatenating putchar'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch2;
char ch3;
char ch4;
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
ch3 = putchar(ch);
}
ch2;
for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
{
ch4 = putchar(ch2);
}
char ch5 = ch3 + ch4;
return (0);
}
