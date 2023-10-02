#include <stdio.h>

/**
 * main - function that print all argument it recieves
 * @argc: first parameter
 * @argv: second parameter holding the string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
