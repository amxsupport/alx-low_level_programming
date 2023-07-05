#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards.
 *
 * Return: If the strings can be considered identical - 1.
 *         Otherwise - 0.
 */
int wildcmp(char *s1, char *s2)
{
	/* Base case: If both strings are empty, they match */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If s2 is '*', it can match any string (including empty string) */
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));

	/* If the current characters match, compare the next characters */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0); /* Strings don't match */
}
