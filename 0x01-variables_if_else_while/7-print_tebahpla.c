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
	char ch;

	for (ch = 'z'; ch <= 'a'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
