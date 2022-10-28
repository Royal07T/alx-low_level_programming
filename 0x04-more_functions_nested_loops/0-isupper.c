#include "main.h"

/**
 * _isupper - function that checks for upper case
 * @c: input
 * Return: 1 if c is upppercase or 0 if otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c >= 'Z'))
		return (1);
	else
		return (0);
}
