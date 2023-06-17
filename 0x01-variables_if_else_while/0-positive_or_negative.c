#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: return 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*code start here */
	if (n > 0)
	{
		printf("The number %d is positive", n);
	}
		else if (n == 0)
	{
		printf("The number %d is zero", n);
	}
		else if
			(n < 0)
			{
			printf("The number %d is negative", n);
			}
	printf("\n");
	return (0);
}
