#include "holberton.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 *  in the string haystack
 *
 * @haystack: string to work on
 * @needle: substring to match
 * Return: pointer to the first match or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				k = i;
				while (needle[j] != '\0' && needle[j] == haystack[k])
				{
					if (needle[j + 1] == '\0' && needle[j] == haystack[k])
						return (haystack + i);
					k++;
					j++;
				}
			}
		}
	}
	return (NULL);
}
