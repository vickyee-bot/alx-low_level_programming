#include <stdio.h>
/**
* islower - check lowercase
* Return: always 0
*/
int _islower(int c);
{
	int num;
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == c)
			num = 1;
	ch++;
	}
	if (num == 1)
		return(1);
	else 
		return(0);
}
