#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: name of the pointer
 * @b: data type of the variable
 * @n : data type which is int n
 * Return: value of the pointer
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int num0fByte = 0;

	while (num0fByte < n)
	{
		*(s + num0fByte) = b;
		s++;
		num0fByte++;
	}
	return (s);
}

