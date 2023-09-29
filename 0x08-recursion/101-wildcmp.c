#include "main.h"
#include <string.h>

/**
 * wildcmp - function that compares two strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: 0 or 1 where necessary
 */

int wildcmp(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '\0')
	{
		return (1);
	}
	else if (s2[0] == '*')
	{
		if (s1[0] == '\0')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else
		{
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
		}
	}
	else if (s1[0] == s2[0])
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
