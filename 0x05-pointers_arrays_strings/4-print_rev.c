#include "main.h"
#include <string.h>

/**
  *print_rev - Entry point
  *@s: The character that ouputs code result
  *Return: 0
  */
void print_rev(char *s)
{
	int i = 0;
	int len;

	while (s[i] != '\0')
	{
		i++;
	}
	for (len = i - 1; len >=  0; len--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
