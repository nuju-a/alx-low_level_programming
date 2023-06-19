#include <stdio.h>
#include <ctype.h>

/**
  *main - Entry point
  *
  *Return: return 0
  */
int main(void)
{
	int num;

	for (num = 0; num <= 15; num++)
	{
		if (num == 'A' || num == 'F')
		{
			num = num  | 0x20;
		}
		putchar(num);
	}
	putchar('\n');
	return (0);
}

