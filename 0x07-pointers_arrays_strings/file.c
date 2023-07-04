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
	unsigned int i;

	/*if (s == NULL)*/
		/*return (NULL);*/
	/*}*/

	/*if (*s == '\0')*/
	/*{*/
	/*	return (s);*/
	/*}*/

	for ( i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
if (*s == '\0')
{
	return (s);
}
return (NULL);
}
