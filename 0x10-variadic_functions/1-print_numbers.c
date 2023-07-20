#include "variadic_functions.h"

/**
  *print_numbers - Entry point
  *@seperator: pointer to char
  *@n: constant parameter
  *
  *Return: integers
  */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i, string;
	va_list num;


	if (seperator == NULL)
		return;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(num, unsigned int);

		printf("%d", string);
		if (i != (n - 1))
			printf("%s", seperator);
	}
	printf("\n");
	va_end(num);
}
