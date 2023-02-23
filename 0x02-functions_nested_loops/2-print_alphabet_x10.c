#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char k = 'a';
int i;
for(i=0; i<10; i++)
{
 while (k <= 'z')
 {
 _putchar(k);
 k++;
 }
 _putchar('\n');
}
}
int main()
{
print_alphabet_x10();
return (0);
}
