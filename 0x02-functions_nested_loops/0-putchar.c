#include <stdio.h>

/**
 * main - function to print
 * Return: 0
 */
int main(void)
{
	char nested[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	unsigned int c;

	for (c = 0; c < sizeof(nested); c++)

	{
		_putchar(nested[c]);
	}
	_putchar('\n');
	return (0);
}
