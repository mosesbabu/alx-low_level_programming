#include "holberton.h"

/**
 * print_last_digit - prints the last digit of an integer
 *@n: integer whose last digit we want to find
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n = -(n);
	last = n % 10;

	_putchar('0' + last);

	return (last);
}
