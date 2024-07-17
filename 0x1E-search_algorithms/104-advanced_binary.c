#include "search_algos.h"


int binary_search_recursion(int *array, int value, size_t low, size_t high);

/**
 * binary_search_recursion - recursively searches for a value
 *	    in an integer array
 *
 * @array: pointer to first element of array to search
 * @value: value to search for
 * @low: first index of an array
 * @high: last index of an array
 *
 * Return: index containing value, or -1 if array null or value not found
 */
int binary_search_recursion(int *array, int value, size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = (low + high) / 2;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i == high)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		else
			return (binary_search_recursion(array, value, low, mid));
	}

	if (low == high)
		return (-1);

	if (array[mid] < value)
		return (binary_search_recursion(array, value, mid + 1, high));

	return (binary_search_recursion(array, value, low, mid));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using a binary search algorithm
 *
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index containing value, or -1 if array null or value not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (binary_search_recursion(array, value, 0, size - 1));
}
