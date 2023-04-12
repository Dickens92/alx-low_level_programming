#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **spacee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	spacee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		spacee[x] = malloc(sizeof(int) * width);

		if (spacee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(spacee[x]);

			free(spacee);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			spacee[x][y] = 0;
	}

	return (spacee);
}
