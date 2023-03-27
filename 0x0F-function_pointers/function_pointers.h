#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * struct size - define a new type of struct
 * 
 *  
 *
 */
struct size_t;

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));


#endif
