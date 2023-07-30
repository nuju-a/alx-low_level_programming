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
	//size_t len1;
	//size_t len2;
	unsigned int size = n, t_len;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	result = malloc((size + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	size = 0;
	for (t_len = 0; s1[t_len]; t_len++)
		result[size++] = s1[t_len];
	for (t_len = 0; s2[t_len] && t_len < n; t_len++)
		result[size++] = s2[t_len];

	result[size] = '\0';

	return (result);
}
