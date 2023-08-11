#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block.
 * @ptr: a pointer to the memory previously allocated with a call to malloc.
 * @old_size:  size, in bytes, of the allocated space for ptr.
 * @new_size: new size, in bytes of the new memory block.
 * Return: pointer to allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	int min_size;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	min_size = old_size < new_size ? old_size : new_size;
	memcpy(new_ptr, ptr, min_size);

	free(ptr);
	return (new_ptr);
}
