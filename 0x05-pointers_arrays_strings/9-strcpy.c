#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: copy destination
 * @src: copy source
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
int y = 0;
int x = 0;

while (*(src + y) != '\0')
{
l++;
}
for ( ; x < y ; x++)
{
dest[x] = src[x];
}
dest[y] = '\0';
return (dest);
}
