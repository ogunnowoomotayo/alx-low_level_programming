#include "main.h"
#include <string.h>

/**
 *  * _strpbrk - function that searches a string for any of a set of bytes.
 *   * @s: pointer for the first parameter
 *    * @accept: pointer for the second parameter
 *     * Return: pointer of byte s
 *      */

char *_strpbrk(char *s, char *accept)
{
		int i, j;

			for (i = 0; s[i] != '\0'; i++)
					{
								for (j = 0; accept[j] != '\0'; j++)
											{
															if (s[i] == accept[j])
																			{
																								return (&s[i]);
																											}
																	}
									}
				return (NULL);
}
