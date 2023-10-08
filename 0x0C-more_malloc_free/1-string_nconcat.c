#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenate two string at momery run time.
 * @s1: 1 string pointr
 * @s2: 2 string pointer
 * @n: unsigned int
 * Return: NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m, k;
	char *new_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	m = strlen(s1);
	k = strlen(s2);

	if (n >= k)
	{
		n = m;
	}
	new_string = malloc(m + n + 1);
	strcpy(new_string, s1);
	strncat(new_string, s2, n);
	return (new_string);
}
