#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * is_space - space for the string
 * @c: the space
 *
 * Return: if c is NULL
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * **strtow - function that splits a string into words
 * @str: the string
 *
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	int word_count = 0;
	int i = 0;
	char **words;
	int word_index = 0;
	int j, len, start;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (str[i] != '\0')
	{
		while (is_space(str[i]))
			i++;
		if (str[i] != '\0')
		{
			word_count++;
			while (str[i] && !is_space(str[i]))
				i++;
		}
	}
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		while (is_space(str[i]))
			i++;
		if (str[i] != '\0')
		{
			start = i;
			while (str[i] && !is_space(str[i]))
				i++;
			len = i - start;
			words[word_index] = (char *)malloc((len + 1) * sizeof(char));
			if (words[word_index] == NULL)
			{
				for (j = 0; j < word_index; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			strncpy(words[word_index], str + start, len);
			words[word_index][len] = '\0';
			word_index++;
		}
	}
	words[word_index] = NULL;

	return (words);
}
