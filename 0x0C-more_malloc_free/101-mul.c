/*
 * File: 101-mul.c
 *
 */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int isPositiveNumber(const char *str);
int multiplyNumbers(const char *num1, const char *num2);
int _isdigit(int c);
size_t _strlen(const char *str);
void *calloc_custom(size_t num_elements, size_t element_size);

/**
 * calloc_custom - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @num_elements: The number of elements.
 * @element_size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *calloc_custom(size_t num_elements, size_t element_size)
{
	/* Check for zero elements or zero element size */
	if (num_elements == 0 || element_size == 0)
		return (NULL);

	/* Calculate the total size to allocate */
	size_t total_size = num_elements * element_size;

	/* Allocate memory using malloc */
	void *ptr = malloc(total_size);

	/* If allocation failed, return NULL */
	if (ptr == NULL)
		return (NULL);

	/* Clear the allocated memory block to zero */

	memset(ptr, 0, total_size);

	return (ptr);
}

/**
 * isPositiveNumber - check if two positive numbers.
 * @str: input string.
 *
 * Description: this function return the 0 or 1 if the str given is a digit.
 *
 * Return: 0 if the str is not digit and Return  1 if str is digit.
 */
int isPositiveNumber(const char *str)
{
	while (*str)
	{
		if (!_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * _isdigit - Checks for a digit (0-9).
 * @c: The number to be checked.
 *
 * Return: 1 if the number is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
/**
 * _strlen - returns the length of a string.
 *
 * @str: The string to get the length of.
 *
 * Description: Returns the length of a string.
 *
 * Return: The length of @str.
*/
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * multiplyNumbers - Multiplies two positive numbers.
 * @num1: number 1 to multiply.
 * @num2: number 2 to multiply.
 *
 * Description: If the number of arguments is incorrect or one number
 *              contains non-digits, the function exits with a status of 98.
 * Return: Always 0.
 */
int multiplyNumbers(const char *num1, const char *num2)
{
	int i, j, carry, n1, n2, sum, nonZeroFound;
	int len1, len2, lenResult, *result;

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	lenResult = len1 + len2;
	result = calloc_custom(lenResult, sizeof(int));

	if (result == NULL)
		return (-1);

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}

		result[i] += carry;
	}

	nonZeroFound = 0;

	for (i = 0; i < lenResult; i++)
	{
		if (result[i] != 0)
			nonZeroFound = 1;
		if (nonZeroFound)
			printf("%d", result[i]);
	}
	_putchar('\n');

	free(result);

	return (0);
}


/**
 * main - Multiplies two positive numbers.
 * @argv: The number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 *
 * Description: If the number of arguments is incorrect or one number
 *              contains non-digits, the function exits with a status of 98.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!isPositiveNumber(num1) || !isPositiveNumber(num2))
	{
		printf("Error\n");
		return (98);
	}

	multiplyNumbers(num1, num2);

	return (0);
}
