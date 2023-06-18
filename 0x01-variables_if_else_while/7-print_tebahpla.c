#include <stdio.h>
#include <stdlib.h>

/**
  *main - Entry point
  *Description: prints the lowercase alphabets in reverse
  *followed by a newline
  *Return: return 0
  */
int main(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int lenght = sizeof(ch) / sizeof(ch[0]);
	int i;

	for (i = 0; i < lenght; i--)
		putchar(ch[i]);
	putchar('\n');
	return (0);
}
