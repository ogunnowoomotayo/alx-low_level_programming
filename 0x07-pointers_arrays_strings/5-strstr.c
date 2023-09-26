#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: parameter 1
 * @needle: parameter 2
 * Return: pointer 1 0r null
 */

char *_strstr(char *haystack, char *needle)
{
	int i, m;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (m = 0; needle[m] != '\0'; m++)
	{
		if (haystack[i + m] != needle[m])
		{
			break;
		}
	}
	if (needle[m] == '\0')
	{
		return (&haystack[i]);
	}
	}
	return (NULL);
}
