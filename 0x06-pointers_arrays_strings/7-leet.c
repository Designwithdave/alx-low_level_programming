#include "main.h"

/**
* leet - encodes a string into 1337
* @s: string to encode
*
* Return: encoded string
*/
char *leet(char *s)
{
int i, j;
char letter[] = "aAeEoOtTlL";
char number[] = "4433007711";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; letter[j] != '\0'; j++)
{
if (s[i] == letter[j])
{
s[i] = number[j];
break;
}
}
}
return (s);
}
