#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Write a function that returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *str;
	int v, w = 0;

	if (str == NULL)
		return (NULL);
	v = 0;
	while (str[v] != '\0')
		v++;
	str = malloc(sizeof(char) * (v + 1));

	if (str[] == NULL)
		return (NULL);

	for (w = 0; str[w]; w++)
		str[w] = str[w];

	return (str);
}



