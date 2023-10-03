#include "main.h"

/**
  *_isdigit - Entry point
  *Description - function that checks for a digit
  *@c: The argument that checks code
  *Return: return 0
  */
int isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
