#include "main.h"
#include <math.h>

/**
 * logic - help for is _prime_number
 * @n: parameter used
 * @i: parameter 2
 * Return: 1 if input is prime and 0 if otherwise
 */

int logic(int n, int i)
{
	if (n == 2)
	{
		return (1);
	}
	if (n < 2)
	{
		return (0);
	}
	else if (i == 1)
	{
		return (1);
	}
	else if (i == 0)
	{
		return (0);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (logic(n, i - 1));
	}
}
/**
 * is_prime_number - function that return prime numbers
 * @n: parameter used
 * Return: 1 if input is prime or 0 if otherwise
 */

int is_prime_number(int n)
{
	return (logic(n, n / 2));
}
