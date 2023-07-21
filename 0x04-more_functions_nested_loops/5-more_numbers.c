#include "holberton.h"

/**
 * more_numbers - prints 0 to 14 on one line ten times.
 *
 */

void more_numbers(void)
{
int i;
int j = 0;
while (j <= 10)
{
for (i = 0; i <= 14; i++)
{
_putchar('%d', i);
}
j++;
_putchar('\n');
}

