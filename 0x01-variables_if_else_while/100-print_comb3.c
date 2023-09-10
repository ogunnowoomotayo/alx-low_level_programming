#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0(Success)
 */
int main(void)
{
	int num = 0, num2 = 1;
	/* your code goes there */
	while (nu <= 8)
	{
		num = num + 1;
		while (num2 <= 9)
		{
			putchar(num + '0');
			putchar(num2 + '0');
			if (num != 8 || num != 9)
			{
				putchar(',');
				putchar(' ');
			}
			num2++
		}
		num++;
	}
	putchar('\n);
	return (0);
}
