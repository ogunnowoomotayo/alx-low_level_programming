#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - variadic function that print anything
 * @format: parameter passed to the function
 * @...: more parameter that can be used
 */

void print_all(const char * const format, ...)
{
	int m = 0;
	char *str, *sep = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[m])
		{
			switch (format[m])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					m++;
					continue;
			}
			sep = ", ";
			m++;
		}
	}
	printf("\n");
	va_end(list);
}


