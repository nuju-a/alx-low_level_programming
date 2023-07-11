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
	size_t len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	/*size_t len = strlen(str)*/
	p = malloc((len + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p, str);
	return (p);
}
