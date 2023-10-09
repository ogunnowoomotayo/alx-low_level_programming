#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that create an array of integers
 * @min: first parameter
 * @max: second parameter
 * Return: pointer arr
 */

int *array_range(int min, int max)
{	int *arr;
	int i;

	if (min  > max)
	{
		return (NULL);
	}
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr ==  NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
