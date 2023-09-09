#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0(Success)
 */
int main(void)
{

	/* your code goes there */
	int numb = 0;

	while (numb <= 9)
	{
		putchar(numb + '0');
		numb++;
	}
	putchar('\n');
	return (0);
}
