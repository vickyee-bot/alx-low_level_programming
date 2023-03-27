#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer string
 *
 * Return:void
 */
void puts_half(char *str)
{
	int i;
	int len;

	for (len = 0; str[len] != '\0'; len++)
	for (i = (len + 1) / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
