#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int e, f;

	for (e = 48; e <= 56; e++)
	{
		for (f = 49; f <= 57; f++)
		{
			if (f > e)
			{
				putchar(e);
				putchar(f);
				if (e != 56 || f != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
