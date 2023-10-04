#include "main.h"
#include "string.h"

/**
 *  * _memcpy -  function that copies memory area.
 *   * @dest: pointer for paramater1
 *    * @src: pointer for parameter 2
 *     * @n: unsigned int
 *      * Return: pointer *dest
 *       */

char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int m = 0;

			for (m = 0; m < n; m++)
					{
								dest[m] = src[m];
									}
				return (dest);
}
