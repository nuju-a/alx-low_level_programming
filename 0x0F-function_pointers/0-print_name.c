#include "function_pointers.h"

/**
  *print_name - Entry point for function name
  *@name: function pointer to datatype
  *@f: function pointer
  *
  *Return: returns pointer
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
