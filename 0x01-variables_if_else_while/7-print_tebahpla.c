#include <stdio.h>
#include <string.h>

/**
  *main - Entry point
  *Description: prints the lowercase alphabets in reverse
  *followed by a newline
  *Return: return 0
  */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
