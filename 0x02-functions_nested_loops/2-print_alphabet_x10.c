#include "main.h"
/**
 *  print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int l;
	char f;

	l = 0;

	while (l < 10)
	{
	for (f = 'a'; f <= 'z'; f++)
		{
		_putchar(f);
		}
	l++;
	_putchar('\n');
	}
}
