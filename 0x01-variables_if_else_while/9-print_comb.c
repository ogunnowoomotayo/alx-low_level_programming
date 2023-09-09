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
	while (num <= 9)
	{
		int num_1 = 0;

		while (num_1 <= 9)
		{
			putchar("%d%d ", num, num_1);
			num_1++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
