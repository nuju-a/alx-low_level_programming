#include "main.h"
#include <stddef.h>

/**
  *_strchr - Entry point
  *Description - function locates a character in a string
  *@s: the string in which charcter is searched for
  *@c: the character to be searched
  *Return: return a pointer to first occurence of c
  */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	/*if (*s == '\0')*/
	/*{*/
		/*return (s);*/
	/*}*/
	return (NULL);

}
