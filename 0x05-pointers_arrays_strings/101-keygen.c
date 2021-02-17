#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - program to generate random passwords
 *
 * Return: 0
 */
int main(void)
{
	char pass;
	int comb;

	srand(time(NULL));

	while (comb <= 2645)
		pass = rand() % 128, comb += pass, putchar(pass);
	putchar(2772 - comb);
	return (0);
}
