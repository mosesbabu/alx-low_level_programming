#include "holberton.h"

/**
 * rot13 - converts string to leet
 *
 * @c: character string pointer
 * Return: char pointer
 */
char *rot13(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		while ((c[i] > 64 && c[i] < 91) || (c[i] > 96 && c[i] < 123))
		{
			if ((c[i] > 64 && c[i] < 78) || (c[i] > 96 && c[i] < 110))
				c[i] += 13;
			else
				c[i] -= 13;
			break;
		}
		i++;
	}
	return (c);
}
