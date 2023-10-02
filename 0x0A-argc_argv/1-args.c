#include <stdio.h>

/**
 * main - program that print number of argument passed into it
 * @argc: first parameter
 * @argv: second parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
