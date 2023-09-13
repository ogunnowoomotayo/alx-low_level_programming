#include "main.h"

/**
 * print_alphabet-print alphabet in lowwer case followed by new line
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
