#include "main.h"

/**
  *string_nconcat - Concate function that appends src str to dest
  *@s1: The destination string
  *@s2: The source string
  *@n: number of bytes of that the src can take
  *
  *Return: returns a pointer to strncat
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t dest = strlen(s1);
	/*size_t src = strlen(s2);*/
	size_t i;
	char *result;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return (NULL);
	}

	result = malloc(sizeof(char) * (dest + n + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < dest; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		result[dest + i] = s2[i];
	}
	result[dest + n] = '\0';

	return (result);
}
