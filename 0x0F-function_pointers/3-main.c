#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;
	int result;
	int (*operation)(int, int) = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		return 98;
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		return 99;
	}


	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return 100;
	}
	result = operation(num1, num2);
	printf("%d\n", result);

	return 0;
}
