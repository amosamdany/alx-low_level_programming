#include"main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
*/

void print_alphabet_x10(void)
{
int i;
while(i <= 10)
{
int ch;
for (ch = 'a'; ch <= 'z'; ++ch)
_putchar(ch);
}
i++;
_putchar('\n');
}
