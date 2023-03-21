#include "main.h"
/**
* print_alphabet_x10 - print_alphabet_x10 function
* prints alphabet in lowercase
* Return: 0
*/
void print_alphabet_x10(void)
{
	char ch = 'a';
	int a = 1;

	while (a <= 10)
	{
	ch = 'a';
		while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
		_putchar('\n');
		a++;
	}
}
