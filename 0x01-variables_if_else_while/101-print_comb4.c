#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int e, f, l;

	for (e = 48; e < 58; e++)
	{
		for (f = 49; f < 58; f++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > f && f > e)
				{
					putchar(e);
					putchar(f);
					putchar(l);
					if (e != 55 || f != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
