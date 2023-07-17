#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry pointn
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
int n;
for (n = 0 ; n < 16 ; n++)
{
if (n < 10)
{
putchar('0' + n);
}
else
{
putchar(87 + n);
}
}
putchar('\n');
return (0);
}
