#include "main.h"

/**
  *_isalpha - Entry point
  *
  *@c: parameter that checks for code correctness
  *
  *Return: return 0
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
