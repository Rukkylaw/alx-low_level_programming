#include "main.h"
/**
 * puts_half - print the second half of the string
 * @str: input
 * Return: Always 0
 */
void puts_half(char *str)
{
int a;
int i;
int j;
j = 0;
for (a = 0; str[a] != '\0'; a++)
j++;
i = (j / 2);
if ((j % 2) == 1)
i = ((j + 1) / 2);
for (a = i; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');
}
