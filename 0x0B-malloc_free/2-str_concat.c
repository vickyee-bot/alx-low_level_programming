#include <stdlib.h>
#include "main.h"
/**
* str_concat - concatenates two strings.
* @s1: first string
* @s2: second string
*
* Return: concatenated string
*/ 
char *str_concat(char *s1, char *s2)
{
	int length1, length2, i, j;	
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* Calculate the length of s1 and s2 */
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc((length1 + length2 + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);
	/* Copy s1 to the concatenated string */
	for (i = 0; i < length1; i++)
		concatenated[i] = s1[i];
	/* Copy s2 to the concatenated string */
	for (j = 0; j < length2; j++)
		concatenated[i + j] = s2[j];
	/* Null-terminate the concatenated string */
	concatenated[i + j] = '\0';
	return (concatenated);
}
