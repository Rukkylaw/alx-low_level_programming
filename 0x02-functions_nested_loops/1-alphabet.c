#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char k = 'a';
while (k <= 'z')
{
_putchar(k);
k++;
}
_putchar('\n');
}

int main()
{
print_alphabet();
return (0);
}
