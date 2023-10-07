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

	char *end = NULL;
	char *end2 = NULL;
	long n, n2;

	if (argc != 3)
	{
		printf("Error, incorrect number of arguments. \n");
		return (1);
	}              
	n = strtol(argv[1], &end, 10);
	n2 = strtol(argv[2], &end, 10);

	if (*end != '\0' || end == argv[1])
	{
		printf("Error, argument not a valid integer. \n");
		return (1);
	}
	if (*end2 != '\0' || end2 == argv[2])
	{
		printf("Error, argument not a valid integer. \n");
		return (1);
	}
	else
	{
		long result = n * n2;

		printf("%ld\n", result);
	}
	return (0);
}
