#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h> 
int _putchar(char c);
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void print_name(char *name, void (*f)(char *));
typedef unsigned long size_t;
void array_iterator(int *array, size_t size, void (*action)(int));







#endif /*FUNCTION_POINTERS_H*/
