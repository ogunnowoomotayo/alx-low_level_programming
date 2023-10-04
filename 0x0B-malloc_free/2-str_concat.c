#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * *str_concat -  function that concatenates two strings.
 * @s1: is a pointer to a string
 * @s2: is a pointer to a string
 * Return: a pointer to the result
 */

char *str_concat(char *s1, char *s2)
{

	int length_s1;
	int length_s2;
	char *new_length;
	int size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2	== NULL)
	{
		s2 = "";
	}
	length_s1 = strlen(s1);
	length_s2 = strlen(s2);
	size = length_s1 + length_s2 + 1;
	new_length = (char *)malloc(size * sizeof(char));

	if (new_length == NULL)
	{
	return (NULL);
	}
	else
	{
		if (s1 != NULL)
		{
			strcpy(new_length, s1);
		}
		if (s2 != NULL)
		{
			strcat(new_length, s2);
		}
	}
	return (new_length);
}
