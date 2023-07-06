#include "main.h"

/**
  *_strlen_recursion - Entry point
  *@s: The string to be counted
  *@n: The character to count with.
  *Return: return the number of bytes in s
  */
int _strlen_recursion(char *s)
{
	int c = 0;

	if (s[c] == '\0')
	{
		return (0);
	}
	return 1 + _strlen_recursion(s + 1);
}
