#include "main.h"
#include <string.h>

/**
  *_strlen - Entry point
  *@s: the string variable for which the test is carried out
  *Return: 0
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
