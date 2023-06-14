#include "main.h"
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: input string
*
* Return: duplicate
*/
char *_strdup(char *str)
{
	int length = 0;
	int i;
	char *duplicate;

	/* Return NULL if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}
	/* calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}
	/* allocate memory for the duplicated string */
	duplicate = (char *)malloc((length + 1) * sizeof(char));
	/* Return NULL if malloc fails to allocate memory */
	if (duplicate == NULL)
	{
		return (NULL);
	}
	/* copy the string to the newly allocated memory */
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
	/* Return the pointer to the duplicated string */
	return (duplicate);
}
