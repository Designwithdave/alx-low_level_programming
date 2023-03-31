#include <stdio.h>
/**
* print_buffer - prints the content of size bytes of the buffer
* pointed to by b
* @b: buffer
* @size: size of buffer
*
* Return: void
*/
void print_buffer(char *b, int size)
{
int i, j;
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = 0; j < 10; j++)
{
if (i + j < size)
printf("%02x", *(b + i + j));
else
printf("  ");
if (j % 2)
printf(" ");
}
for (j = 0; j < 10; j++)
{
if (i + j >= size)
break;
if (*(b + i + j) >= ' ' && *(b + i + j) <= '~')
putchar(*(b + i + j));
else
putchar('.');
}
putchar('\n');
}
if (size <= 0)
putchar('\n');
}
