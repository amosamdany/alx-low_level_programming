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
for (n = '0'; n <= '9'; ++n)
{
putchar(',');
putchar(n);
}
putchar('\n');
return (0);
}
