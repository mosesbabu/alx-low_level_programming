#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers starting from 1 and 2
 *
 * Return: int
 */
int main(void)
{
	unsigned long int a = 1, b = 2, fib, i;

	printf("%lu, %lu", a, b);
	for (i = 2; i < 98; i++)
	{
		fib = a + b;
		printf(", %lu", fib);
		a = b;
		b = fib;
	}
	printf("\n");
	return (0);
}
