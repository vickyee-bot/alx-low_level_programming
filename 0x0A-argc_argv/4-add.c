#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: count
 * @argv: vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	char *endptr;
	long num;

	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0' || num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += (int)num;
	}
	printf("%d\n", sum);

	return (0);
}
