#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

char *_memset(char *s, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

size_t strspn(const char *str1, const char *str2);

 char *_strpbrk(char *s, char *accept);

#endif /* MAIN_H */
