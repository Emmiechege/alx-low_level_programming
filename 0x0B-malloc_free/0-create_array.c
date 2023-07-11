#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/*
 * create_array - pointer returned after malloc function
 * @size: size of the array
 * @c: letter to be initialized
 * Return: Null if(0 or fail), Pointer if success
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	} return (arr);
}
