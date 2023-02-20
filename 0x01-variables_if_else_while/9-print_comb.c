#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: 'print all possible combination of single digit'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
