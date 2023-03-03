#include "main.h"
/**
 * _strncat - it will use at most n bytes
 * from src; and src does not need to be
 * null-terminated if it contains n or more
 * bytes concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: sting input
 * * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

i = 0;
j = 0;
while (dest[i] != '\0')
{
i++;
}

while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';
return (dest);
}
