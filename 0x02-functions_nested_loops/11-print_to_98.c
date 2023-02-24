#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * user input's number prints to 98, wether greater than  98 or less than 98
 * @num: input
 * Return: Always 0 (Success)
 */
void print_to_98(int num)
{
	if (num < 98)
	{
		while (num <= 98)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
			num++;
		}
	}
	else if (num > 98)
	{
		while (num >= 98)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
			num--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}

