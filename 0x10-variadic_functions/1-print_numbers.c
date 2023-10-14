#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - varaidic function that print num
 * @separator: string to be printed
 * @n: integer passed
 * @...: more parameter that could be entered
 * Return: NOTHING
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("\n");
		printf("%d", va_arg(nums, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
			va_end(nums);
	}
}
