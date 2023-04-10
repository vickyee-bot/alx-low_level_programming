#include <stdio.h>
/**
 * args - prints all arguments it receives
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */
int args(int argc, char *argv[])
{
	int i = 1;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
