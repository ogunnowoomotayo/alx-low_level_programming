#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0(Success)
 */
int main(void)
{
	int num = 0, num1 = 1, num2 = 2;
	/* your code goes there */
	while (num <= 8)
	{
		num1 = num + 1;
		while (num1 <= 9)
		{
			num2 = num1 + 1;
			while (num2 <= 9)
			{
				putchar(num + '0');
				putchar(num1 + '0');
				putchar(num2 + '0');
				if (num != 7 || num1 != 8 || num2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
				num2++;
			}
			num1++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
