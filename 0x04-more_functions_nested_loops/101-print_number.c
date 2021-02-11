#include "holberton.h"

/**
 * print_number - prints a number using _putchar
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	if (n >= 0)
	{
		num_to_char(n);
	}
	else
	{
		n = -n;
		_putchar('-');
		num_to_char(n);
	}
}

/**
 * num_to_char - transforms a number with 1 or more digits into a char
 * @n: number to print
 *
 * Return: void
 */
void num_to_char(int n)
{
	int d = 10;

	if (n < d)
	{
		_putchar('0' + n);
	}
	else
	{
		while (n >= d)
		{
			d *= 10;
		}
		d /= 10;
		_putchar('0' + n / d);
		while (d != 10)
		{
			d /= 10;
			_putchar('0' + (n / d) % 10);
		}
		_putchar('0' + n % 10);
	}
}
