#include <stdio.h>
/**
* main - main function
* Return: 0
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	if (ch == 'q' || ch == 'e')
		continue;
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
