#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0(Success)
 */
int main(void)
{
	char f = 'a';

	/* your code goes there */
	while (f <= 'z')
	{
		putchar(f);
		f++;
	}
	putchar("\n");
	return (0);
}
