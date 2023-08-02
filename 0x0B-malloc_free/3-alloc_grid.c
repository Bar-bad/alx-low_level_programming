#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that creates a two dimensional array of ints
 * @width: the width of the matrix
 * @height: the height of the matrix
 *
 * Return: a pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **int_2Darray;
	int a, b;

	if (height <= 0 || width <= 0)
		return (NULL);

	int_2Darray = (int **) malloc(sizeof(int *) * height);

	if (int_2Darray == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		int_2Darray[a] = (int *) malloc(sizeof(int) * width);
		if (int_2Darray[a] == NULL)
		{
			free(int_2Darray);
			for (b = 0; b <= a; b++)
				free(int_2Darray[b]);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			int_2Darray[a][b] = 0;
		}
	}
	return (int_2Darray);
}
