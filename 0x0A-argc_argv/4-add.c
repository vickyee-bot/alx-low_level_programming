#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds two numbers
 * @argc: count
 * @argv: vector
 *
 * Return: 1 if an error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return 0;
	}
	for (i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return 1;
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return 0;
}
