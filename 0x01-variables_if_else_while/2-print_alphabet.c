#include <stdio.h>
/**
* main - main function
* Return: 0
*/
int main()
{
	char ch;
	ch = 'a';
	while(ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return 0;
}
