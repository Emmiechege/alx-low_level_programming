#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int number = 1;
	unsigned char *byte_ptr;

	byte_ptr = (unsigned char *)&number;

	/*if LSB byte is 1, the system is little endian*/
	/*if MSB byte is 1, the system is big endian*/

	if (*byte_ptr == 1)
	{
		return (1);
	/*LSB byte is 1 (ex, 0x00000001) hence its little endian*/
	}
	else
		return (0);
	/*MSB byte is 1 (ex, 0x10000000) hence its big endian*/
}
