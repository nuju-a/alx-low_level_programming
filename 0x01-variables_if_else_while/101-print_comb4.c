#include <stdio.h>

/**
  *main - Entry point
  *Return: return 0
  */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 8; a++)
		for (b = a + 1; b < 9; b++)
			for (c = b + 1; c < 10; c++)
			{
				if (a != b && a != c && a != c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (a + b + c < 24)
						{
						putchar(',');
						putchar(' ');
						}
				}
			}
	putchar('\n');
	return (0);
}
