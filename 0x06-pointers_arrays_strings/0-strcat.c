#include "main.h"

/**
 * _strcat - Concatenates two strings
 * src string to the dest string and  overwrites
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
