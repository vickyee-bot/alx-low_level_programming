#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: count
 * @argv: vector
 *
 * Return: 1 if error
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int product = num1 * num2;

	if (argc < argv[3])
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", product);
	return (0);
}
