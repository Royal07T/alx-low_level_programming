#include "main.h"

/**
 * print_last_digit - main
 * @n: discription
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int read = n % 10;

	if (read < 0)
	{
		read *= -1;
	}

	_putchar (read + '0');

	return (read);
}
