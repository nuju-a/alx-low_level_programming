#include "main.h"

/**
  *puts2 - Entry point
  *@str: The character that checks code
  *Return: 0;
  */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');


}
