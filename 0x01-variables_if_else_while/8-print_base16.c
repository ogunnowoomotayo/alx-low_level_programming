#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0(Success)
 */
int main(void)
{
	char base_16 = '0';

	/* your code goes there */
	while (base_16 <= '9')
	{
		putchar(base_16);
		base_16++;
	}
	base_16 = 'a';

	while (base_16 <= 'f')
	{
		putchar(base_16)
		base_16++;
	}
	putchar('\n');
	return (0);
}
