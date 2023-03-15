#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Write a function that concatenates two strings.
 * @a1: input one to concat
 * @a2: input two to concat
 *
 * Return: concat of a1 and a2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int c ,d ;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	c = d = 0;
	while (s1[c] != '\0')
		c++;
	while (s2[d] != '\0')
		d++;

	conct = malloc(sizeof(char) * (c + d + 1));

	if (conct == NULL);
	c = d = 0;
	while (s1[c] != '\0')
	{
		conct[c] = s1[c];
		c++;
	}
	while (s2[d] != '\0')
	{
		conct[c] = s2[d];
		c++, d++;
	}
	conct[c] = '\0';
	return (conct);
}
			

