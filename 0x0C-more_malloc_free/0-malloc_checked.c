#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - function that allocate memory using malloc
 * @b: unsigned argument
 * Return: pointer;
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
