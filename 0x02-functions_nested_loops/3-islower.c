#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
  *_islower -  Entry point
  *
  *@c: parameter  takes on the value for lower case check is performed
  *
  *Return: return 0
  */
int _islower(int c)
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
