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
	char *arr;
	int index, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	arr = malloc(sizeof(char) * len);

	if (arr == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		arr[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		arr[concat_index++] = s2[index];

	return (arr);
}
