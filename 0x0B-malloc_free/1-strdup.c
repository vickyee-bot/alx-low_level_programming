#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *dup_str;
	int len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	dup_str = (char *) malloc(len + 1);
	if (dup_str == NULL)
		return (NULL);
	strcpy(dup_str, str);
	return (dup_str);
}
