#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'print _putchar'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(h[i]);
	}
	_putchar('\n');
	return (0);
}
