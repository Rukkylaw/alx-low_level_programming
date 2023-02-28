#include "main.h"
/**
 * puts_half - print the second half of the string
 * 
 * @str: input
 * Return: half
 */
void puts_half(char *str)
{
int len = strlen(str);
int start = len / 2;
if (len % 2 != 0)
{
start = (len - 1) / 2;
}
for (int i = start; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
}

