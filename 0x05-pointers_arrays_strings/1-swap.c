#include "main.h"

/**
  *swap_int - Entry point
  *@a: first variable that points to type
  *@b: second variabe that points to type
  *Description - the function is to swap the value of the varaibles.
  *Return: 0
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
