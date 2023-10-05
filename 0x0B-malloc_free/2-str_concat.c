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
	size_t A = strlen(s1);
	size_t B = strlen(s2);

	if (s1 == NULL || s2 == NULL)
	{
		return (" ");
	}
	/*char *p;
	*size_t A = strlen(s1);
	*size_t B = strlen(s2);
	*/
	p = malloc((A + B + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p, s1);
	strcat(p, s2);
	return (p);
}

