#include "main.h"

/**
  *string_nconcat - Entry point
  *@s1: first parameter
  *@s2: second parameter
  *
  *@n: n byte of the pointer
  *Return: 0
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t len1;
	size_t len2;
	size_t totallen;

	if (s1 == NULL || s2 == NULL)
	{
		return (" ");
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	totallen = len1 + (n + 1);
	result = malloc(totallen);

	if (!result)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strncat(result, s2, n);
	result[len1 + n] = '\0';

	return (result);
}
