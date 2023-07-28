#include "main.h"
/**
 * leet - Encode a string into "1337".
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
char *ptr = str;
char leetMap[] = "aAeEoOtTlL";
char leetReplace[] = "4433007711";
while (*ptr)
{
char *leetChar = leetMap;
char *replaceChar = leetReplace;
while (*leetChar)
{
if (*ptr == *leetChar)
{
*ptr = *replaceChar;
break;
}
leetChar++;
replaceChar++;
}
ptr++;
}
return (str);
}

