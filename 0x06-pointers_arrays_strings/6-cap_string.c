#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @p: data type of the pointer
 * Return: pointer p
 */

char *cap_string(char *p)
{
	int i, j;

	i = 0;

	char l[13]  = {',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}', ' ', '\n', '\t'};

	while (p[i] != '\0')
	{
		if (i == 0 && p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}
		j = 0;

		while (j < 13)
		{
			if (p[i] == l[j])
			{
				if (p[i + 1] >= 'a' && p[i + 1] <= 'z')
				{
					p[i + 1] -= 32;
				}
			}
			j++;
		}
		i++;
	}
	return (p);
}
