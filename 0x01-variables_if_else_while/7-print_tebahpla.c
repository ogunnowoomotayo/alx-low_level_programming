#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0(Success)
 */
int main(void)
{
	char f = 'z';

	/* your code goes there */
	while (f >= 'a')
	{
		putchar(f);
		f--;
	}
	putchar('\n');
	return (0);
}
