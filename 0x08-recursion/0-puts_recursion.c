#include "main.h"
#include <string.h>

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: Parameter pointing to string
 * puts_with_newline - function to add a new line.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
