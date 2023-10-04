#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - function that return pointer to a new allocated space in memory
 * @str: pointer containing the string
 * Return: NULL
 */

char *_strdup(char *str)
{

	char *new_str;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}
	length = strlen(str);
	new_str = malloc((length + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}
