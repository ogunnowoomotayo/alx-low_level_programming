#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that print minimum number coin
 * @argc: number of count
 * @argv: parameter holding the array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num, g, ttol;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	ttol = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (g = 0; g < 5 && num >= 0; g++)
	{
		while (num >= coins[g])
		{
			ttol++;
			num -= coins[g];
		}
	}

	printf("%d\n", ttol);
	return (0);
}

