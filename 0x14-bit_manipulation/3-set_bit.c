#include "main.h"
/**
set_bit - function that sets a bit at a given index to 1
@n: the pointer to the number that is to be changed
@index: the index of the bit to be set to 1

Return: For success, 1,
For failure, -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index > 63)
        return (-1);

    *n = ((1UL << index) | *n);
    return (1);
}