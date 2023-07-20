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
	unsigned int count = 0;
	const char *arg;
	va_list string;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(string, const char*);

		if (arg == NULL)
		{
			printf("(nil)");
			printf("\n");
			return;
		}
		/*if (arg != NULL || arg[0] != '\0')*/
		printf("%s", arg);
			/*count++;*/

			if (seperator != NULL && count < (n - 1))
			{
				printf("%s", seperator);
			}
			count++;
	}
	printf("\n");
	va_end(string);
}
