#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that print the result of mulitiplication
 * @argc: 1 parameter
 * @argv: 2 parameter
 * Return: 0 or 1 where necesarry
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int n = atoi(argv[1]);
		int n1 = atoi(argv[2]);
		int result = n * n1;

		printf("%d \n", result);
		return (0);
	}
	else
	{
		return (1);
	}
}
