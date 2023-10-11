#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef unsigned long size_t;
#endif

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));







#endif /*FUNCTION_POINTERS_H*/
