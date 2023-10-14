#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments
 *
 * Return: always 0
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	char c;

	va_start(args, format);

	while ((c = *ptr) != '\0')
	{
		if (c == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (c == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (c == 'f')
		{
			printf("%f", (float)va_arg(args, double));
		}
		else if (c == 's')
		{
			char *str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		if (*(ptr + 1) != '\0')
			printf(", ");
		ptr++;
	}
	printf("\n");
	va_end(args);
}
