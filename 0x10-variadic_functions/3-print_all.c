#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments
 *
 * Return: always 0
 */
void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	int arg_index = 0;

	va_list args;
	va_start(args, format);

	while ((c = format[arg_index]) != '\0')
	{
		if (c == 'c')
		{
			i = va_arg(args, int);
			printf("%c", i);
		}
		else if (c == 'i')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (c == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}

		arg_index++;

		if (format[arg_index] != '\0')
			printf(", ");
	}

	printf("\n");
	va_end(args);
}
