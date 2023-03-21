#include "main.h"
/**
* print_alphabet - print_alphabet function
* prints alphabet in lowercase
* Return: 0
*/
void print_alphabet_x10(void)
{
	char ch = 'a';
	int a = 1;

	while (a <= 10)
	{
		while (ch <= 'z')
	{
	_putchar(ch);
	ch++;
	}
	_putchar('\n');
	a = a + 1;
	}
}
