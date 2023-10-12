#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to the function to be executed on each element
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
