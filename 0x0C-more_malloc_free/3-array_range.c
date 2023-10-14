#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * @min: value
 * @max: value
 *
 * Return: always 0
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		arr[i - min] = i;

	return (arr);
}
