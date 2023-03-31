#include "main.h"
#include <stdio.h>
/**
* infinite_add - adds two numbers
* @n1: first number
* @n2: second number
* @r: buffer to store result
* @size_r: size of buffer
* Return: pointer to result or 0 if buffer is too small
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, len_sum = 0, carry = 0, i, j;
while (n1[len1])
len1++;
while (n2[len2])
len2++;
if (len1 + 2 > size_r || len2 + 2 > size_r)
return (0);
len_sum = len1 > len2 ? len1 + 1 : len2 + 1;
r[len_sum] = '\0';
for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--, len_sum--)
{
int sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
carry = sum / 10;
r[len_sum - 1] = (sum % 10) + '0';
}
if (carry)
{
if (len_sum == 1)
return (0);
r[len_sum - 2] = carry + '0';
return (r + len_sum - 2);
}
return (r + len_sum - 1);
}
