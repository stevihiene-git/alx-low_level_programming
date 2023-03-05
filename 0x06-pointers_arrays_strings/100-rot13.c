#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @words: the string to encode
 *
 * Return: encode string
 */
char *rot13(char *words)
{
	int i, j;

	char alfabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (words[i] != '\0')
	{
		j = 0;
		while (alfabet[j] != '\0')
		{
			if (words[i] == alfabet[j])
			{
				words[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (words);
}
