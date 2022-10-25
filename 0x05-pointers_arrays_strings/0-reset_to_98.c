#include "main.h"
#include <stdio.h>

/**
 * Reset to 98.Take pointer and reset it to 98.
 * @n : Pointer
 * return: void
 */ 
void reset_to_98(int *n)
{
	*n = 98;
	printf("%d\n", *n);
}
