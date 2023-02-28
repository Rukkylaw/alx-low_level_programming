#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string 2 print
 * Return: Always 0
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
