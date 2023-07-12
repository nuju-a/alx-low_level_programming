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
	int i;
	int j;
	int *p;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(height * sizeof(int *));

	if (p == NULL)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int *));

			if (arr[i] == NULL)
			{
				for (j = 0; j < width; j++)
				{
					free(arr[j]);
				}
				free(arr);
				free(p);
				return (NULL);
			}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
