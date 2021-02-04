#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = 48, a = 48, i = 48, b = 48;

	while (d < 58)
	{
		a = 48;
		while (a < 58)
		{
			i = 48;
			while (i < 58)
			{
				b = 48;
				while (b < 58)
				{

					if (d == i && a < b)
					{
						putchar(d);
						putchar(a);
						putchar(' ');
						putchar(i);
						putchar(b);
						if (!(d == 57 && a == 56 && i == 57 && b == 57))
						{
							putchar(',');
							putchar(' ');
						}
					}
					b++;
				}
				i++;

			}
			a++;
		}
		d++;
	}
	putchar('\n');

	return (0);
}
