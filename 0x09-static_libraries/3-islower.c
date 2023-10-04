#include "main.h"

/**
 *  * _islower - Write a function that checks for lowercase character.
 *   * @c: check lowwer case
 *    * Return: 1 for success and 0 for Error.
 *     */

int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
				{
							return (1);
								}
			else
					{
								return (0);
									}

				_putchar('\n');
}
