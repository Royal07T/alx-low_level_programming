#include "main.h"
#include <stdio.h>

/**
 * Reset to 98 -function
 * @n : Parameter
 * return: void
 */
void reset_to_98(int *n)
{
	int **p = &n;

	**p = 98;
}
