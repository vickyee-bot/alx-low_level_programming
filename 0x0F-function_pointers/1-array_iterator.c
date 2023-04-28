#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes function given as parameter on each element
 * @array: array of integers
 * @size: size of the array.
 * @action: pointer to the function to use
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
