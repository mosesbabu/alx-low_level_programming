#include "holberton.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: string
 * Return: int
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s), mid;

	if (len == 0)
		return (1);
	if (len % 2 == 0)
		mid = len / 2;
	else
		mid = (len - 1) / 2;
	return (palindrome_check(s, len, mid));
}

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	len = _strlen_recursion(s + 1);
	return (len + 1);
}

/**
 * palindrome_check - returns 1 if palindrome and 0 if not
 *
 * @s: string
 * @len: length of string
 * @mid: middle of string
 * Return: int
 */
int palindrome_check(char *s, int len, int mid)
{
	if (*s != *(s + len - 1) && len >= mid)
		return (0);
	else if (*s == *(s + len - 1) && len >= mid)
		return (1);
	return (palindrome_check(s + 1, len - 1, mid));
}
