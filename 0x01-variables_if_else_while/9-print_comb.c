#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: return 0
  */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
