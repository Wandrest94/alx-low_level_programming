#include "main.h"

/**
 * set_bit - set bit at index to 1
 * @n: pointer of number to change
 * @index: index of bit to set to 1
 *
 * Return: 1 if success, -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
