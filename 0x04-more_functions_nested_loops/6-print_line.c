#include "main.h"

/**
  *print_line - Entry point
  *
  *Return: 0
  */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n || i < n)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(95);
			_putchar('\n');
		}
	}
}
