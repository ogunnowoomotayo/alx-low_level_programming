#include "main.h"
#include <string.h>

/**
 * is_palindrome2 - function to help another function
 * @s: the string parameter
 * @start: second parameter
 * @end: third parameter
 * Return: 0 or 1
 */

int is_palindrome2(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (is_palindrome2(s, start + 1, end - 1));
	}
}

/**
 * is_palindrome - the main function that returns 1 if a string is a palindrome
 * @s: the parameter holding the string
 * Return: 1 if string is a palindrome else return 0
 */

int is_palindrome(char *s)
{
	if (strlen(s) == 0)
	{
		return (1);
	}
	else
	{
		return (is_palindrome2(s, 0, strlen(s) - 1));
	}
}
