#include "main.h"
#include <stdio.h>

/**
 *print_array - Entry point
 *@a: argument of the pointer
 *@n: The character that checks the code
 *Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
