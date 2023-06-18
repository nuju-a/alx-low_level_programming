#include <stdio.h>

/**
  *main - Entry point
  *Description: print all single digit numbers of base 10
  *numbers starts from 0, followed by a newline
  *Return: return 0
  */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
		putchar(x);
	putchar('\n');
	return (0);
}

