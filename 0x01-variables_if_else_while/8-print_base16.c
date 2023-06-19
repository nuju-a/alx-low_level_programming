#include <stdio.h>
#include <ctype.h>

/**
  *main - Entry point
  *
  *Return: return 0
  */
int main(void)
{
	char num;

	for (num = 48; num <= 102; num++)
	{
		putchar(num);
		if (num == 57)
		{
			num += 39;
		}
	}
	putchar('\n');
	return (0);
}
