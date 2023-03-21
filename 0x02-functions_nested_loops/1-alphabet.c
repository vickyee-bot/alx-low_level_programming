#include "main.h"
#include <stdio.h>
/**
* print_alphabet - print_alphabet function
* prints alphabet in lowercase
* Return: 0
*/
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');
	}
int main(void)
{
	print_alphabet();
	return (0);
}
