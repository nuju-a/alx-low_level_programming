#include "variadic_functions.h"

/**
  *print_strings - Entry point
  *@seperator: pointer to char
  *@n: constant parameter
  *
  *Return: strings in n
  */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	const char *arg;
	va_list string;

	if (n == 0)
		printf("nil\n");
	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(string, const char*);
		printf("%s", arg);

		if (seperator != NULL && i != (n - 1))
			printf("%s", seperator);
	}
	printf("\n");
	va_end(string);
}
