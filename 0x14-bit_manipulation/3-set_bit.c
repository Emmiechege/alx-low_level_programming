#include "main.h"
#include <stddef.h>
/**
 * set_bit - sets the value of a bit to 0 at a given index
 * @n: Apointer to the bit
 * @index: is the index, starting from 0 of the bit you are setting
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask;

	if (index >= (sizeof(unsigned long int) * 8) || n == NULL)
	{
		return (-1); /*error, when index is out of bounds*/
	}

	bit_mask = 1UL << index; /*Create a bit_mask at given index set*/

	*n |= bit_mask; /*Set the bit at given index to 1*/

	return (1); /*Return 1 to indicate success*/

}
