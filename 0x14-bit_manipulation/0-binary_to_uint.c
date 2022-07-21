#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned int
 *
 * @b : pointer to a string
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bit = 0;

	while (b && *b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		bit = bit << 1;
		bit = bit | (*b - '0');
		b++;
	}
	return (bit);
}
