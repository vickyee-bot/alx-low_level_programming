#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name
 * @argc: count
 * @argv: vector
 *
 * Return: name followed by new line
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
