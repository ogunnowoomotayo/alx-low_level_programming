#include "main.h"

/**
 * print_sign - function that print signs of a number
 * @n: integer type
 * Return: 1  if n is greater than zero, else return zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(1);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
