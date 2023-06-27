/*
 * File: 4-print_rev.c
 *
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
		index++;

	for (index -= 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}

