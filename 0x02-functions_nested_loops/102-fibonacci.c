#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: int
 */
int main(void)
{
	long int a = 1, b = 2, fib, i;

	printf("%ld, %ld", a, b);
	for (i = 2; i < 50; i++)
	{
		fib = a + b;
		printf(", %ld", fib);
		a = b;
		b = fib;
	}
	printf("\n");
	return (0);
}
