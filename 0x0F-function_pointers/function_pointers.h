#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * struct size - define a new type of struct
 * 
 *  
 *
 */
typedef struct size
} size_t;

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));


#endif
