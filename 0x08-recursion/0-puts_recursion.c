#include "main.h"
#include <string.h>

/**
 * _puts_recursion -  function that prints a string, followed by a new line.
 * @s: Parameter pointing to string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		 _putchar('\n');
	}
}
