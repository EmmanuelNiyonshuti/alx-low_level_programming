#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#ifndef NULL
#define NULL ((void *)0)
#endif
int _putchar(char c);
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void print_name(char *name, void (*f)(char *));
typedef unsigned long size_t;
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));







#endif /*FUNCTION_POINTERS_H*/
