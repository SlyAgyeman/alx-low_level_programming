#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int j;
	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	return (0);
}
