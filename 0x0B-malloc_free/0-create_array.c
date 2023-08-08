#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: initializes the array.
 * Return: pointer to array
 *  NULL if it fails or size is zero.
 */
char *create_array(unsigned int size, char c)
{
	 char *arr; /* the character pointer */
	 unsigned int i; /* the loop iterator */

	if (size == 0)
		/* if the size is zero, return a null pointer */
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);/* allocating memory */

	if (arr == NULL)
		/* if the program fails return a null pointer */
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c; /* initializing each element with a specific character */
		/* iterate through the elements until i reaches the size of the array */
	}
	return (arr);
	/* if the program runs succesfully, return a pointer to the array */
}
