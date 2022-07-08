/**
 * Header file containging fuction prototype
 */
#include <stddef.h>
#ifndef FUNCTIONS_H
#define FUNCTION_H

int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char);
void print_name(char *name, void (*f)(char *));

#endif
