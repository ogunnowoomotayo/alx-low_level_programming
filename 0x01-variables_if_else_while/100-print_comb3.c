#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0(Success)
 */
int main(void)
{
	int num = 0;

	/* your code goes there */
	while (num <= 7)
	{
		int num2 = num + 1;
	}
	while (num2 <= 8)
	{
		int num3 = num2 + 1;
	}
	while (num3 <= 9)
	{
		putchar(num + '0');
		putchar(num2 + '0');
		putchar(num3 + '0');
	}
	if (num != 7 || num2 != 8 || num3 != 9)
	{
		putchar(',');
		putchar(' ');
	}
	num3++
	return (0);
}
