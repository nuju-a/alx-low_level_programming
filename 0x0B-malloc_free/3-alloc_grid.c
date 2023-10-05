#include "main.h"

/**
  *alloc_grid - Entry point
  *@width: first parameter
  *@height: second parameter
  *
  *Return: 0
  */
int **alloc_grid(int width, int height)
{
	int w;
	int h;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		arr[h] = malloc(sizeof(int) * w);

		if (arr[h] == NULL)
		{
			for (; h >= 0; h--)
				free(arr[h]);

			free(arr);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			arr[h][w] = 0;
	}

	return (arr);
}
