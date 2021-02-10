#include <stdio.h>

/**
 * main - prints the sum of even fibonacci numbers that do not exceed 4000000
 *
 * Return: int
 */
int main(void)
{
	int a = 1, b = 2, fib = 0, sum = 2;

	while (fib <= 4000000)
	{
		fib = a + b;
		a = b;
		b = fib;
		if (fib <= 4000000 && fib % 2 == 0)
			sum += fib;
	}
	printf("%d\n", sum);
	return (0);
}
