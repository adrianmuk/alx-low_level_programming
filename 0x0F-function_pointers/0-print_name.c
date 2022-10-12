#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to the name
 * @f: function pointer of type char
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
