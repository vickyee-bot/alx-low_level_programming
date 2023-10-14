#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - function that concatenates all the arguments
 * @ac: arguements count
 * @av: arguements vector
 *
 * Return: NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int index, i;
	char *concat_str;

	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];
		while (*arg != '\0')
		{
			total_length++;
			arg++;
		}
		total_length++;
	}
	concat_str = (char *)malloc((total_length + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);
	index = 0;
	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];
		while (*arg != '\0')
		{
			concat_str[index] = *arg;
			index++;
			arg++;
		}
		concat_str[index] = '\n';
		index++;
	}
	concat_str[index] = '\0';

	return (concat_str);
}
