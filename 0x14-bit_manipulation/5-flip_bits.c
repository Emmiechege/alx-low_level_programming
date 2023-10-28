#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get fro one number to another
 * @n: the number to be flipped
 * @m: the other number
 *
 * Return: the number of bits youwould need to flip
 * to get from one no to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_op_result;
	unsigned int bit_count = 0; /*initialize count var to keep track of set bits*/

	xor_op_result = n ^ m; /*perfom XOR operation to find differing bits */

	while (xor_op_result)
	{
		bit_count += xor_op_result & 1; /*add least signficant bit to count*/

		xor_op_result >>= 1; /*Right-shift xor results to check the next bit*/
	}
	return (bit_count); /*Return bit count of differing bits*/
}
