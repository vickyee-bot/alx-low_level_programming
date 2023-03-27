#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	while (s[len] != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
	{
	temp = s[i];
	s[i] = s[len - i - 1];
	s[len - i - 1] = temp;
	}
	_putchar('\n');
}
