#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; ++letter)
{
putchar(letter);
}
for (letter = 'A'; letter <= 'Z'; ++letter)
{
putchar(letter);
}
putchar('\n');
return (0);
}
