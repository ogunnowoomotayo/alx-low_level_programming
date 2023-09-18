#include "main.h"

/**
 * swap_int - function that swap the value of two integer
 * @a: int a (1st parameter)
 * @b: int b (2nd parameter)
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
