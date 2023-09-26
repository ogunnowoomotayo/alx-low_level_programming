#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer *s (1 parameter)
 * @accept: second parameter
 * Return: number of byte in the intial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	int p, f;

	unsigned int counter = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		int len = 0;

		for (f = 0; accept[f] != '\0'; f++)
		{
			if (s[p] == accept[f])
			{
				counter++;
				len += 1;
				break;
			}
		}
		if (!len)
		{
			break;
		}
	}
	return (counter);
}
