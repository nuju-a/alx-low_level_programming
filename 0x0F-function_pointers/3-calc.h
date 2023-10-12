#ifndef FUNCOP_H
#define FUNC0P_H
/*standard lib*/
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/*struct definfition*/
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
/*function prototype*/
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /*FUNCOP_H*/
