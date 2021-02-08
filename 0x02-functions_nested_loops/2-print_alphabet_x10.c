#include "holberton.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times on new lines
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
