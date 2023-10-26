#include "main.h"

/**
  *binary_to_uint - function that converts binary to unsigned int
  *@b: const char that points to current conversion unit
  *
  *Return: converted number of 0
  */
unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b);
	int i;
	char c;
	unsigned int sum = 0, mult = 1;


	if (b == NULL)
		return (0);

	for (i = 0; i < len; i++)
	{
		c = b[i];
		if (c != '0' && c != '1')
			return (0);
	}
	for (i = 0; i < len; i++)
	{
		/*if (b[len - 1 - i] == '1')*/
		sum += (b[len - 1 - i] - '0') * mult;

		mult *= 2;
	}
	return (sum);
}
