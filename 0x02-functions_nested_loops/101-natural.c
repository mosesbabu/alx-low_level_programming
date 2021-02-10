#include "holberton.h"
#include <stdio.h>

/**
 * natural - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void natural(void)
{
	int i = 0, sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}
	printf("%d\n", sum);
}
