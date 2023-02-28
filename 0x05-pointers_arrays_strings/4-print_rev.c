#include "main.h"
/**
 * print_rev - prints a string, in reverse,
 * followed by a new line.
 * @s: string 2 print in rev
 * Return: Always 0.
 */
void print_rev(char *s)
{
int str = 0;
int i;
while (*s != '\0')
{
str++;
}
str--;
for (i = str; i > 0; i--)
{
_putchar(*s);
s--;
}
}
