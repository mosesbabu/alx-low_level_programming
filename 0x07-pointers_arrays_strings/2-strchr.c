#include "holberton.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string to be searched
 * @c: character to search for
 * Return: pointer to first occurence of c if it's there or NULL otherwise
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
