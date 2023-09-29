#include "main.h"
#include <math.h>

/**
 *  _sqrt_recursion2 - helper function
 *  @n: parameter 1
 *  @g: parameter 2
 *  Return: -1 if n does not have a natural squareroot
 */

int _sqrt_recursion2(int n, int g)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else if ((g * g) == n)
	{
		return (g);
	}
	else if ((g * g) > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion2(n, g + 1));
	}
}
/**
 *  _sqrt_recursion - function that returns the natural square root number
 *  @n: parameter to be used
 *  Return: back the function
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion2(n, 1));
}
