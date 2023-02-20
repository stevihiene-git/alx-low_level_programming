#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: 'print alphabets except e and q'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		putchar('\n');
	}
	return (0);
}
