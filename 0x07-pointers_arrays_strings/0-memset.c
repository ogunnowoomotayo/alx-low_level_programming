#include "main.h"
#include <string.h>

/**
 * _memset - function that fills memory with a constant byte.
 * @s: name of the pointer
 * @b: data type of the variable
 * @k : data type which is int k
 * Return: value of the pointer
 */

char *_memset(char *s, char b, unsigned int k)
{
	char *filled_mem;

	filled_mem = memset(s, b, k);
	return (filled_mem);
}
