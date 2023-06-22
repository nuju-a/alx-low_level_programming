#include "main.h"
#include <ctype.h>

/**
  *_isupper - Entry point
  *Description - function that checks for uppercase character
  *@c: The integer with which check is performed
  *Return: return 0
  */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
