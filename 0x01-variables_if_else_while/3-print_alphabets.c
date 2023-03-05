#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int k;

	for (k = 0; k < 52; k++)
	{
		putchar(alp[k]);
	}
	putchar('\n');
	return (0);
}
