/*
 * File: 4-isalpha.c
 */

#include "main.h"

/**
 * _isalpha - Checks if a character is alpha lower or upper.
 * @c: The character to be checked.
 *
 * Return: 1 if character is alpha, 0 otherwise.
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
