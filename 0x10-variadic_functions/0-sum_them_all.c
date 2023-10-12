#include "variadic_functions.h"

/**
  *sum_them_all - Entry point
  *@n: const parameter
  *
  *Return: sum of integer
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(all, n);

	for (i = 0; i < n; i++)
	{
		/*va_arg(all, unsigned int);*/
		sum += va_arg(all, unsigned int);

		va_end(all);
	}
	return (sum);
}
