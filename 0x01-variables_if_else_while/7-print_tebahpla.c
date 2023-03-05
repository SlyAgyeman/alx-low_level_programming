#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ar;

	for (ar = 'z'; ar >= 'a'; ar--)
	{
		putchar(ar);
	}
	putchar('\n');
	return (0);
}
