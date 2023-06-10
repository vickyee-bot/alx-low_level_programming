#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string to be converted
 *
 * Return: void
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			 result = result * 10 + (s[i] - '0');
		if (result != 0 && (s[i] < '0' || s[i] > '9'))
			break;
		i++;
	}
	return (sign * result);
}
