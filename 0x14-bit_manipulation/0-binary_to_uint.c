#include "main.h"
/**
binary_to_uint - function that converts a binary no. to an unsigned int
@b: the string that contains the binary no.

Return: the number that hs been converted
*/
unsigned int binary_to_uint(const char *b)
{
    int lcount;
    unsigned int decimValu = 0;

    if (!b)
    return (0);

    for (lcount = 0; b[lcount]; lcount++)
    {
        if (b[lcount] < '0' || b[lcount] > '1')
            return (0);
        decimValu = 2 * decimValu + (b[lcount] - '0');
    }
    return (decimValu);
}