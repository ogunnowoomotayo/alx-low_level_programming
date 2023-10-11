#include "function_pointers.h"
/**
 *int_index - function that Write a program that performs simple operation
 *@array: array
 *@size: size of elements in array
 *@cmp: pointer to func of one of the 3 in main
 *Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
