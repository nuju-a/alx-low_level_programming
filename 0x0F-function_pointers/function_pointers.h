#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void(*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));



#endif /*_MAIN_H*/
