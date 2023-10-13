#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: parameter passed to the function
 * @...: more parameter that could be entered
 * Return: 0 if n is equal to 0
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
		va_end(ap);
	}
	return (sum);
}

