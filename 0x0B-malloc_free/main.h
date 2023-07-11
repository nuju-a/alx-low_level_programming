#ifndef MAIN_H
#define MAIN_H

/*includes standard libraries*/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/*includes the function prototypes*/

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char **strtow(char *str);
char *argstostr(int ac, char **av);

#endif /*MAIN_H*/
