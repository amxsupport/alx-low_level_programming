/*
 * File: 100-realloc.c
 *
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* If ptr is NULL, equivalent to malloc(new_size) */
	if (ptr == NULL)
		return (malloc(new_size));

	/* If new_size is zero, equivalent to free(ptr) */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	/* If new_size is equal to old_size, do nothing and return ptr */
	if (new_size == old_size)
		return (ptr);

	/* Allocate new memory block with new_size */

	void *new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	/* Copy contents from old memory block to new memory block */

	size_t copy_size = old_size < new_size ? old_size : new_size;

	memcpy(new_ptr, ptr, copy_size);

	/* Free the old memory block */
	free(ptr);

	return (new_ptr);
}
