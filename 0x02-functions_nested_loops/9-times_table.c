#include "holberton.h"

/**
 * times_table - function that prints times table for 9
 *
*/
void times_table(void)
{
	int a = 0, b = 0;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			if (b == 0)
			{
				_putchar('0' + a * b);
			}
			else if (!(a * b > 9))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + a * b);
			}
			else if (a * b > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (a * b) / 10);
				_putchar('0' + (a * b) % 10);
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
