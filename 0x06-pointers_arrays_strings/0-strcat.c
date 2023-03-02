#include "main.h"

/**
 * _strcat - a function that concatenate two strings
 * Appends the src string to the dest string
 * overwrites the terminating null
 * @dest: input value
 * @src: input value
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int b;
	int a;

	b = 0;
	while (dest[b] != '\0')
	{
	      b++;
	}
	a = 0;
	while (src[a] != '\0')
	{
	        dest[b] = src[a];
		b++;
		a++;
	}
	dest[b] = '\0';
	return (dest);
}
