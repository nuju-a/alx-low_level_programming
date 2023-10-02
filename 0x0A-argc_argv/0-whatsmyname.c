#include "main.h"

/**
  *main - Entry point
  *@argc: agrument count
  *@argv: agrument array
  *
  *Description - the string literal
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}

