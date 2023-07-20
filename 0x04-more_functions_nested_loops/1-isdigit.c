#include <stdio.h>
#include "main.h"
/**
 * _isdigit - a function that print if the input is digit
 * @c: variable input
 * Return: 1 if is digit  and 0 if is not
 */

int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
