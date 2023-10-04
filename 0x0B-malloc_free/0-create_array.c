#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: 1 parameteri
 * @c: char c declare as the second parameter
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array =  malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
