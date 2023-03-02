#include "main.h"

/**
 * _strncat - This function will use at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int b;
	int a;

	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	a = 0;
	while (a < n && src[a] != '\0')
	{
	dest[b] = src[a];
	b++;
	a++;
	}
	dest[b] = '\0';
	return (dest);
}

