#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: string value
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

for (i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
