#include "main.h"

/**
  *str_concat - Entry point
  *@s1: pointer to the first string
  *@s2: pointer to the second string
  *
  *Return: 0
  */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int index, concat = 0, len = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (" ");
	}
	for (index = 0; s1[index] || s2[index]; index++)
		len++;
	p = malloc(len * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		p[concat++] = s1[index];

	for (index = 0; s2[index]; index++)
		p[concat] = s2[index];

	return (p);
}
