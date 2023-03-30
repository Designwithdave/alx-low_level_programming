char *rot13(char *s)
{
int i, j;
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
i = 0;
while (s[i] != '\0')
{
j = 0;
while ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
{
if (j > 25)
break;
if (s[i] == rot[j])
{
s[i] = rot[j + 13];
break;
}
j++;
}
i++;
}
return s;
}
