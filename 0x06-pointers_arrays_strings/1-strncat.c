#include "main.h"
/**
* _strlen - Computes the size of a string.
* @s: The string to compute the size of.
*
* Return: The size of the string.
*/
int _strlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}
/**
* _strncat - Concatenates two strings.
* @dest: The destination string.
* @src: The source string.
* @n: The maximum number of bytes to copy from src.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = _strlen(dest);
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return (dest);
}
