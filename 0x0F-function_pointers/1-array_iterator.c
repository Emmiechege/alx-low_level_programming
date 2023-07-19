#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that iterates through the array
 * @size: size of the array
 * @action: pointer to the function to ber executed
 * @array: array to be iterated through
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (size == 0 || array == NULL || action == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
