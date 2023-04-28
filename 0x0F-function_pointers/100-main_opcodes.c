#include <stdio.h>
#include <stdlib.h>

void print_opcodes(unsigned char *start, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", *(start + i));
	}
	printf("\n");
}
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes((unsigned char *)main, num_bytes);
	return (0);
}
