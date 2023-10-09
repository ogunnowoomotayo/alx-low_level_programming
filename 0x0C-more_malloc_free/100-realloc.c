#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _realloc - function that rellocate a memory block using malloc and free
 * @ptr: variable pointer string
 * @old_size: parameter 2
 * @new_size: parameter 3
 * Return: new_pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);
	return (new_ptr);
}

