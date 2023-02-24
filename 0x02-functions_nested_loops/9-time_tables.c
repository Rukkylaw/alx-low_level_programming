#include "main.h"
/**
 *9- times_table - Prints the 9 times table
 *main-check the code
 * Return: Always 0
 */
void times_table(void)
{
for(int i = 0; i <= 9; i++) 
{
for(int j = 0; j <= 9; j++)
 {
int result = i * j;
if(result <= 9) {
_putchar(result + '0');
_putchar(' ');
}
else 
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
 _putchar(' ');
}
}
_putchar('\n');
}
}
