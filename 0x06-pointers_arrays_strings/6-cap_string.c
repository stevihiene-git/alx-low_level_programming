#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @words: the string to change the first letter of a word in uppercase
 *
 * Return: capitalizes letters
 */
char *cap_string(char *words)
{
	int i;
	int j;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	i = 0;

	while (words[i] != '\0')
	{
		if (i == 0 && words[i] >= 97 && words[i] <= 122)
		{
			words[i] = words[i] - 32;
		}


		j = 0;
		while (c[j] != '\0')
		{
			if (c[j] == words[i] && (words[i + 1] >= 97 && words[i + 1] <= 122))
			{
				words[i + 1] = words[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (words);
}
