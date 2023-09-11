#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0(Success)
 */
int main(void)
{
	int num = 0, num1 = 1;

	/* your code goes there */
	while (num <= 8)
	{
		int num1 = num + 1;

	while (num1 <= 9)
	{
		putchar(num + '0');
		putchar(num1 + '0');
		if (num != 8 || num1 != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num1++;
	}
	num++;
	}
	putchar('\n);
	return (0);
}
