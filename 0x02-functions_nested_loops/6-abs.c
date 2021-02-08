#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 *@n: integer whose absolute value to find
 *
 * Return: int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = -n;
		return (n);
	}
}
