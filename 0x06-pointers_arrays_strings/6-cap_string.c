/**
*cap_string - capitalizes all words of a string
* @s: the string to modify
*
* Return: a pointer to the modified string
*/
char *cap_string(char *s)
{
int i = 0;
while (s[i] != '\0')
{
/* check if first letter of a word */
if ((i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
s[i - 1] == '}') && (s[i] >= 'a' && s[i] <= 'z'))
{
s[i] -= 32;
}
i++;
}
return (s);
}
