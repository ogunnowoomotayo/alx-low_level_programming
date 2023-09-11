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
	while (num <= 99)
	{
		num1 = num + 1;
		while (num1 <= 99)
		{
			putchar(num / 10 + '0');
			putchar(num % 10 + '0');
			putchar(' ');
			putchar(num1 / 10 + '0');
			putchar(num1 % 10 + '0');
			if (num != 98 || num1 != 99)
			{
				putchar(',');
				putchar(' ');
			}
			num1++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
