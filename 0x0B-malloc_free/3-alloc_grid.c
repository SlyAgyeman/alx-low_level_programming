#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 *@width: width input
 *@height: height input
 *
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **sly;
	int s, t;

	if (width <= 0 || height <= 0)
		return (NULL);

	sly  = malloc(sizeof(int *) * height);
	if (sly == NULL)
		return (NULL);

	for (s = 0; s < height; s++)
	{
		sly[s] = malloc(sizeof(int) * width);
		if (sly[s] == NULL)
		{
			for (; s >= 0; s--)
				free(sly[s]);
			free(sly);
			return (NULL);
		}
	}
	for (s = 0; s< height; s++)
	{
		for (t = 0; t < width; t++)
			sly[s][t] = 0;
	}

	return (sly);
}

