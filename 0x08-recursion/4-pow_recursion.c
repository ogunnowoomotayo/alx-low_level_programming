#include "main.h"
#include <math.h>

/**
 * _pow_recursion - function that returns the value of x powered by y.
 * @x: parameter 1
 * @y: parameter 2
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
