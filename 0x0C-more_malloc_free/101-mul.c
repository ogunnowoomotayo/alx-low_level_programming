#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that multiply two positive number
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j, i;
	int num_1, num_2;
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (98);
			}
		}
	}
	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[2]);
	sum = num_1 * num_2;
	printf("%d\n", sum);
	return (0);
}
