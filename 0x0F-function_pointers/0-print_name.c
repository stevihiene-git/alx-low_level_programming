#include "function_pointers.h"

/**
  * print_name - Prints a name
  * @name: The name to prints
  * @f: Pointer to function
  *
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{	
	if (name == 0 || f == 0)
		return;

	f(name);
}
