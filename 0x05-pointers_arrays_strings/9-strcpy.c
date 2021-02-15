#include "holberton.h"

/**
 * *_strcpy - copies string to given memory location
 * @dest: where the string needs to be copied
 * @src: where the string is
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len + 1) = *(src + len + 1);

	return (dest);
}
