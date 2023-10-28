#include "main.h"
#include <stddef.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: A pointer to the bit
 * @index: The index to set the value starting from index
 *
 * Return: 1 if it worked, -1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}

	bit_mask = 1UL << index; /* create a bit mask at given index set as 1*/

	*n &= ~bit_mask; /*clear the bit at given index (set it to 0)*/

	return (1); /*Return 1 to indicate success*/
}
