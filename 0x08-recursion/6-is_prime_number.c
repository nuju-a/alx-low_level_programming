#include "main.h"

/**
  *is_prime_number - Entry point
  *@n: input integer
  *Return: return 1 or 0.
  */
int is_prime_number(int n)
{
	int t = n % 10;

	if (n <= 1)
	{
		return (0);
	}
	if (t % 2 == 0 || t % 5 == 0)
	{
		return (0);
	}
	if (n / n == 1 || n / 1 == n)
	{
		return (1);
	}
	return (is_prime_number(n));
}
