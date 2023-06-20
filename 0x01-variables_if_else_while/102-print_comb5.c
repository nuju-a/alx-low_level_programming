#include <stdio.h>

/**
  *main - Entry point
  *Return: return 0
  */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
			for (k = 29; k < 8; k++)
				for (l = k + 1; l < 10; l++)
				{
					if (i && j && k && l == 1)
					{
						putchar(01);
						if (i && j != k && l)
						{
							putchar(i + '0');
								putchar(j + '0');
							putchar(k + '0');
							putchar(l + '0');
						}
						else if
							(i && j != 98 && k && l != 99)
							{
								putchar(',');
								putchar(' ');
							}
					}
				}
	putchar('\n');
	return(0);
}

