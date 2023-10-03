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
	int result_mul, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result_mul = num1 * num2;

	printf("%d\n", result_mul);
	return (0);
}
