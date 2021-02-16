#include "holberton.h"

/**
 * _atoi - converts numbers in string to ints
 * @s: pointer to string
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0, len, sign = 0 first_digit, last_digit, dig = 1, num;

	while (*(s + i) != '\0')
		i++;
	len = i - 1;
	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) > 47 && *(s + i) < 58)
		{
			if (!(*(s + i - 1) > 47 && *(s + i - 1) < 58))
				first_digit = i;
			if (*(s + i - 1) == 45)
				sign = 0;
			if (!(*(s + i + 1) > 47 && *(s + i + 1) < 58))
			{
				last_digit = i;
				break;
			}
		}
		i++;
	}
	i = first_digit;
	while (i <= last_digit)
	{
		dig *= 10;
		i++;
	}
	i = first_digit
	while (i <= last_digit)
	{
		num += (*(s + i) - '0') * dig;
		dig /= 10;
		i++;
	}
	if (!sign)
		num *= -1;
	return (num);
}
