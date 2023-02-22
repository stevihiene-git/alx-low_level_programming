#include <stdio.h>
#include <stdlib.h>
#include"main.h"
/**
 * main - Entry point
 *
 * Description: 'print _putchar'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *mP = "_putchar";

	while (*mP)
		{
			_putchar(*mP);
			mP++;
		}	
	
	_putchar('\n');
	return (0);
}
