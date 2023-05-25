#include "main.h"
/**
 * _strcpy - copy the string
 * @destn: array that returns
 * @src: the pointer that receive the string
 *
 * Return: the parameter dest.
 */
char *_strcpy(char *destn, char *src)
{
	int n = 0;
	int i;

	while (src[n] != '\0')
	{
		n++;
	}

	i = 0;
	while (i < n && src[i] != '\0')
	{
		destn[i] = src[i];
		i++;
	}

	i = i;
	while (i <= n)
	{
		destn[i] = '\0';
		i++;
	}
	return (destn);
}
