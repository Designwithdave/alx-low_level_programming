/**
* wildcmp - Compares two strings recursively, where the second string may
* contain wildcard characters (*).
*
* @s1: The first string.
* @s2: The second string.
*
* Return: 1 if the strings can be considered identical, otherwise 0.
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0') /* Base case: Both strings are empty */
return (1);
if (*s2 == '*') /* If s2 starts with a *, we move to the next character */
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
if (*s1 == '\0' || *s2 == '\0') /* One of the strings is empty */
return (0);
if (*s1 == *s2) /* Current characters match */
return (wildcmp(s1 + 1, s2 + 1));
return (0); /* Characters don't match and there is no * */
}
