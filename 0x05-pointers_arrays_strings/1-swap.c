#include "main.h"

/**
 * swap_int - a function that takes a pointer to an int as parameter and
 * @c - creates a temporary value holder
 * @a: takes the value of b
 * @b: takes the value of c
 * Return: 1 or 0
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;

}

