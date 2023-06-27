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

	len = i - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');

}
