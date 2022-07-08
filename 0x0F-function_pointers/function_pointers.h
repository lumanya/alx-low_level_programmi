/**
 * Header file containging fuction prototype
 */

#ifndef FUNCTIONS_H
#define FUNCTION_H

void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char);
void print_name(char *name, void (*f)(char *));

#endif
