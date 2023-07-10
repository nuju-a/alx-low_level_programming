#include "main.h"

/**
  *main - Entry point
  *@argc: argument count
  *@argv: argument array
  *
  *Return: 0 0r 1
  */
int main(int argc, char *argv[])
{
	long int result = 1;
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			result = result * strtol(argv[i], NULL, 10);
		}
		printf("%ld\n", result);
	}
		else
		{
			printf("Error\n");
			return (1);
		}
		return (0);
}
