#include "holberton.h"

/**
 * _isalpha - checks whether or not a character is an alphabet
 * @c: ascii value
 * Return: 1 if it is lowercase or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 94 && c < 123))
		return (1);
	else
		return (0);
}
