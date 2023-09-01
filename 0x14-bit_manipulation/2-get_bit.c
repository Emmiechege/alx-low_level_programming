#include "main.h"

/**
 * get_bit - gets te value of a bit at a given index
 * @n: the integer
 * @index: index used t acquire te values
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	/* if n is 0 and index is witin bounds 0-63,return 0(bit is always 0) */
	if (n == 0 && index < 64)
		return (0);
	/* loop through each bit of te unsigned long int (64bits) */
	for (i = 0; i <= 63; n >>= 1, i++)
	{
		/* check if current index matches desired index */
		if (index == i)
		{
			/* use bitwise AND operator to extract bit at the given index */
			/* return irs value (either 0 or 1) */
			return (n & 1);
		}
	}
	/* if index is out of bounds or the loop didnt find the index, return -1 */
	return (-1);
}
