#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: number to work on
 * @index: bit index
 * Return: 1 if it worked or -1 if it didn't
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 8 * 32 || !n)
		return (-1);
	*n |= 1UL << index;
	return (1);
}