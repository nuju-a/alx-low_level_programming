#include "main.h"

/**
  *_strdup - Entry point
  *@str: the string to duplicate
  *
  *Return: 0
  */
char *_strdup(char *str)
{
	char *p;
	int index;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	p = malloc((len + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		p[index] = str[index];

	p[len] = '\0';

	return (p);
}
