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
	int deci;
	char alpha;

	for (deci = 0; deci < 10; deci++)
		putchar((deci % 10) + '0');
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	putchar(alpha);
	putchar('\n');
	return (0);
}
