#include "main.h"

/**
  *_strspn - Entry point
  *@s: the string that contains charcaters to be matched
  *@accept: the character to be matched
  *Return: return lenght in initial segement of s.
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (s[n] != '\0')
	{
		unsigned int i = 0;

		while (accept[i] != '\0')
		{
			if (s[n] == accept[i])
				break;
			i++;
		}
		if (accept[i] == '\0')
			break;
		n++;
	}
	return (n);
}
