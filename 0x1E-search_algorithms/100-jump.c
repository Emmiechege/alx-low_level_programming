#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if it's not present
 *         in array or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), left = 0, right = 0;

	if (!array)
		return (-1);

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	right = right < size ? right : size - 1;

	for (; left <= right; left++)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
	}

	return (-1);
}
