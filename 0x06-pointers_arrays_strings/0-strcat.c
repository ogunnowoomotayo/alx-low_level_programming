#include "main.h"
#include <string.h>

/**
 *_strcat - function that concatenates two strings
 *@dest: first input
 *@src: second input
 *Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *i = strcat(dest, src);

	return (i);
}
