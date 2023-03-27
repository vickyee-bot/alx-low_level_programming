#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l, i;
	char *begin_ptr, *end_ptr, ch;

	l = strlen(str);
	begin_ptr = str;
	end_ptr = str + l - 1;

	for (i = 0; i < (l - 1) / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;
		begin_ptr++;
		end_ptr--;
	}
}
