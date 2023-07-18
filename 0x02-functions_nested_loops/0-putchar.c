#include <stdio.h>
/**
 * main - prints
 * Return: 0 on success.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
int main(void)
{
char message[] = "_putchar\n";
int i = 0;
while (message[i] != '\0') 
{
_putchar(message[i]);
i++;
}
return (0);
}

