#include <stdio.h>
#include <stdlib.h>

/**
  *main - Entry point
  *
  *Return: return 0
  */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

