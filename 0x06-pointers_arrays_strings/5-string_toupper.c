/**
* string_toupper - Changes all lowercase letters of a string to uppercase.
* @s: Pointer to the string to modify.
*
* Return: Pointer to the modified string.
*/
char *string_toupper(char *s)
{
char *ptr = s;
while (*ptr)
{
if (*ptr >= 'a' && *ptr <= 'z')
*ptr -= 'a' - 'A';
ptr++;
}
return s;
}
