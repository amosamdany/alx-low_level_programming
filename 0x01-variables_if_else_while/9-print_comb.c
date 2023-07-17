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
for (n = 0 ; n < 10 ; n++)
{
putchar(n + '0');
if (n < 9)
{
putchar(',');
putchar(32);
}
}
putchar('\n');
return (0);
}

