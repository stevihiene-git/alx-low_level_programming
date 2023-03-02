#include "main.h"
/**
 * leet - encodes a string
 * @words: the string to encode
 *
 * Return: the encode string
 */
char *leet(char *words)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	i = 0;
	while (words[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (words[i] == c[j])
			{
				words[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (words);
}
