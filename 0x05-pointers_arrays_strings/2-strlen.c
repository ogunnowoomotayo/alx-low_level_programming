#include "main.h"
#include <stdio.h>

/**
 * _strlen -  writing a function that return the length of a string
 * @s: the data type., char s
 * Return: length
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*(s +lenght) != '\0')
	{
		putchar(lenght++);
	}
	return (lenght);
}
