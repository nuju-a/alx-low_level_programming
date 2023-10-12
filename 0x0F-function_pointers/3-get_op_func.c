#include "3-calc.h"

/**
  *get_op_func ; Function returns a pointer that equal parameter called
  *@s: operator passed as argument to the program
  *@int: values to be passed
  *
  *Return: returns the parameter passed
  */
int (*get_op_func(char *s))(int, int)
{
		op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);

}
