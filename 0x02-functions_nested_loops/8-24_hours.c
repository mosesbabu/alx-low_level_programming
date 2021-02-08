#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	char a = 48, b = 48, c = 48, d = 48;

	while (a < 51)
	{
		b = 48;
		while (b < 58)
		{
			c = 48;
			while (c < 54)
			{
				d = 48;
				while (d < 58)
				{
					if (!(a == 50 && b >= 52))
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
