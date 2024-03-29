#include "main.h"
#include <stdlib.h>

/**
 * create_array - Write a function that creates an array of chars
 * @size: size of array
 * @c: char to assign
 * 
 * Return: Pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int s;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (s = 0; s < size; s++)
		str[s] = c;
	return (str);
}
