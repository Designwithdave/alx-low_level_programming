#include "main.h"
/**
* _strstr - locates a substring
* @haystack: the string to search in
* @needle: the substring to search for
*
* Return: pointer to the beginning of the located substring, or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
char *haystack_ptr, *needle_ptr;
if (*needle == '\0')
return (haystack);
while (*haystack)
{
haystack_ptr = haystack;
needle_ptr = needle;
while (*needle_ptr && *haystack_ptr == *needle_ptr)
{
haystack_ptr++;
needle_ptr++;
}
if (*needle_ptr == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
