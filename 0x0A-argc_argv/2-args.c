#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int q;

	for (q = 0; q < argc; q++)
	{
		printf("%s\n", argv[q]);
	}

	return (0);
}
