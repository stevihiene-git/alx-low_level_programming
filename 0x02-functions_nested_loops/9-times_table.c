#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * row = row, col = column, dgit = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int row1, col1, dgit;

	for (row1 = 0; row1 <= 9; row1++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col1 = 1; col1 <= 9; col1++)
		{
			digit = (row1 * col1);
			if ((dgit / 10) > 0)
			{
				_putchar((dgit / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((dgit % 10) + '0');

			if (col1 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}

