#include "main.h"

/**
  *_isupper - Entry point
  *Description - function that checks for uppercase character
  *@c: The integer with which check is performed
  *Return: return 0
  */
int _isupper(int c)
{
	int c;

	if (isupper(c))
	{
		return (49);
	}
	else
	{
		return (48);
	}
}
