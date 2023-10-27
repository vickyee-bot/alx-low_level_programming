#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: void
 */
int get_endianness(void)
{
	unsigned int x = 1;
	unsigned char *byte_ptr = (unsigned char *)&x;

	return (int)(*byte_ptr);
}
