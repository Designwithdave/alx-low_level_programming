#include "main.h"
/**
* rev_string - reverses a string
* @s: the string to reverse
*/
void rev_string(char *s)
{
int i, j;
char tmp;
i = 0;
j = 0;
while (s[j] != '\0')
{
j++;
}
j--;
while (i < j)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
i++;
j--;
}
}
