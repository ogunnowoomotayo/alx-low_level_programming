#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i;
	int total = 0;
	size_t j;

	if (argc == 1)
	{
		printf ("0 \n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			
			if (!isdigit(argv[i][j]))
			{
				printf("Error,\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
