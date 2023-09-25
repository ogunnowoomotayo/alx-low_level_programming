#include "main.h"
#include "string.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer for parameter 1
 * @c: variable for parameter 2
 * Return: a pointer to parameter 2 or null if character is not found;
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
