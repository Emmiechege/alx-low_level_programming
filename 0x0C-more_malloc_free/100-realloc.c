#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the previously allocated memory
 * @old_size: ptr allocation space in bytes
 * @new_size: size in bytes of new memory block
 * REturn: pointer to the new allocated memory or NULL if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1 = ptr; /*old pointer of allocated memory*/
	char *ptr2; /* new pointer of allocated memory*/
	unsigned int i;
	unsigned int max = new_size;

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		return (ptr2);
	}
	else if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		ptr2[i] = ptr1[i];
	free(ptr);
	return (ptr2);
}
