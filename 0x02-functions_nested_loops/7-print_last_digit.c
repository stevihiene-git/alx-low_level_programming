#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @ldigt: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int ldigt)
{
	int fdigt;

	fdigt = (ldigt % 10);

	if (fdigt < 0)
	{
		fdigt = (-1 * fdigt);
	}

	_putchar(fdigt + '0');
	return (fdigt);
}
