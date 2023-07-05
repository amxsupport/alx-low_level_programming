#include "main.h"
#include <string.h>

int is_palindrome(char *s);
int isPalindromeRecursive(char *str, int start, int end);

/**
 * isPalindromeRecursive - Checks if a string is a palindrome.
 * @str: The string to be checked.
 * @start: The length of s.
 * @end: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int isPalindromeRecursive(char *str, int start, int end)
{
	if (start >= end)
		return (1);

	if (str[start] == str[end])
		return (isPalindromeRecursive(str, start + 1, end - 1));
	else
		return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (isPalindromeRecursive(s, 0, length - 1));
}
