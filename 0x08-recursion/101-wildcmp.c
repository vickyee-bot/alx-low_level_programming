#include "main.h"
#include <string.h>

/**
 * wildcmp_recursive - Helper function to compare two strings recursively
 * @s1: The first string
 * @s2: The second string.
 *
 * Return: 1 if the strings can be considered identical
 */
int wildcmp_recursive(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*' || (*s1 == *s2 && *s1 != '\0'))
		return (wildcmp_recursive(s1 + 1, s2) || wildcmp_recursive(s1, s2 + 1));
	return (0);
}

/**
 * wildcmp - Compares two strings and returns 1
 * @s1: The first string.
 * @s2: The second string with '*' as a special character
 *
 * Return: 1 if the strings can be considered identical
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_recursive(s1, s2));
}
