#include "main.h"

/**
 * _abs -  input the absolute value of an integer
 * @n: input data type
 * Return: absolute value at @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
