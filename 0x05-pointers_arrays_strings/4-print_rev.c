#include "main.h"
/**
 * print_rev - prints a string, in reverse,
 * followed by a new line.
 * @s: string 2 print in rev
 * Return: Always 0.
 */
void print_re(char *s)
{
int str = 0;
int i;
while (s[str] != '\0')
{
str++;
}
for (i = str-1 i >= 0; i--)
{
_putchar(s[i]);
}
