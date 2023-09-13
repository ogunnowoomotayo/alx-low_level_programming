#include "main.h"

/**
 * print_alphabet_x10 - print alphabet_x10 in lowwer case followed by new line
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
