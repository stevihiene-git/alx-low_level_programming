#include "main.h"
/**
 * printing the alphabets 10 times
 *
 * Always return 0
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
