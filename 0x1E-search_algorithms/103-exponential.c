#include "search_algos.h"

int my_binary_search(int *array, size_t left, size_t right, int value);

/**
 * my_binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @low: the lower bound of the array to search in
 * @high: the upper bound of the array to search in
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 if it is not present
 */
int my_binary_search(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (!array)
		return (-1);

	while (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = low + (high - low) / 2;

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if it's not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, high;

	if (!array)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	high = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, high);
	return (my_binary_search(array, i / 2, high, value));
}
