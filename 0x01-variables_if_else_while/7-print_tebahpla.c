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
char i;
for (i = 'z'; i >= 'a'; --i)
{
putchar(i);
}
putchar('\n');
return (0);
}
