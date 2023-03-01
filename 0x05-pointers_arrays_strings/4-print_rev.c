#include "main.h"

/**
 * print_rev -  prints a string in reverse
 *
 * @s: arg s
 *
 * Return: void
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
