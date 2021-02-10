#include "holberton.h"

/**
 * _isdigit - returns whether a ASCII code is a digit or not
 *@c: character ASCII to check
 *
 * Return: 1 if it is uppercase and 0 if not
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
