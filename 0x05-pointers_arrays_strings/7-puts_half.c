#include "main.h"
#include <string.h>

/**
  *puts_half - Entry point
  *@str: The character that checks code
  *Return: 0
  */
void puts_half(char *str)
{
	unsigned long len = strlen(str);
	unsigned long index;
	unsigned long i;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		index = len / 2;
	}
	else
	{
		index = ((len - 1) / 2);
	}
	for (i = index; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
