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
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	return (0);
}
