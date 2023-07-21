#include "main.h"

/**
 * print_line - prints a line to a given length.
 * @n: length of the line.
 *
 *
 */
void print_line(int n)
{
	while (!(n <= 0))
	{
		_putchar('_');
		n--;
}
	_putchar('\n');
}

