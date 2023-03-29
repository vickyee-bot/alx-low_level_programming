#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements of the array
 *
 * Return: a reversed
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for(i = 0; i<n/2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
	return (temp);
}
