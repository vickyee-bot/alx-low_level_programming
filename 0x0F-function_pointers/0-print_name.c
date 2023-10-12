#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: function pointer
 * @char: character pointer
 *
 * Return: always void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
