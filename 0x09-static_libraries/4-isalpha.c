#include "main.h"

/**
 *  * _isalpha - function that checks for alphabet character.
 *   * @c: check if c is lowwer case or uppercase.
 *    * Return: 1 0r 0
 *     */

int _isalpha(int c)
{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
				{
							return (1);
								}
			else
					{
								return (0);
									}

				_putchar('\n');
}
