#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @f: function pointer
 * @name: string
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name != NULL)
	f(name);
}
