#include "main.h"
/**
 * main - check the code
 * print_alphabet_x10 -  prints 10 times the alphabet in lowercase followed by a new line
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char i;
char j;
for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(j);
}
_putchar('\n');
}
}
