#include "main.h"
#include <stddef.h>

/**
  *_strpbrk - Entry point
  *@s: the string containing the character
  *@accept: the charcter to be searched
  *Return: return a pointer to the byte s
  */
char *_strpbrk(char *s, char *accept)
{
	int n = 0;

	while (s[n] != '\0')
	{
		int i = 0;

		while (accept[i] != '\0')
		{
			if (s[n] == accept[i])

				return (&s[n]);
			i++;
		}
		n++;
	}
	return (NULL);
}

