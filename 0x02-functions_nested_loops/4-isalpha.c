#include "main.h"
/**
* _isalpha - check lowercase
* @c: stores value
* Return: always 0
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
