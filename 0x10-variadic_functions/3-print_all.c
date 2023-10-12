#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * void print_all - function that prints anything
 * @format: list of types of arguments passed
 * @char: string pointer
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	char *str;
	int num;
	char ch;
	float f;
	int printed = 0;

	va_start(args, format);

	while (*ptr)
	{
		switch (*ptr)
		{
			case 'c':
				ch = va_arg(args, int);
				printf("%c", ch);
				printed = 1;
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				printed = 1;
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				printed = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				printed = 1;
				break;
			default:
				printed = 0;
				break;
		}

		if (*(ptr + 1) && printed)
			printf(", ");

		ptr++;
	}

	va_end(args);

	printf("\n");
}
