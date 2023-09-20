#include "main.h"

/**
 * print_last_digit - write function that print the last digit of a number
 * @n: data type
 * Return: return the last digit
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = -1 * (n % 10);
		_putchar(r + '0');
		return (r);
	}
	else
	{
		r = n % 10;
		_putchar(r + '0');
		return (r);
	}
}
