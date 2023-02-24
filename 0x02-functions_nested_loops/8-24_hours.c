#include "main.h"
/**
 *8-jack_bauer-prints all minutes in a day from 00:00
 *main-check the code
 *Return:0 if succeesful and 1 if erro exist.
 */
void jack_bauer(void) 
{
for(int hour = 0; hour < 24; hour++) 
{
for(int minute = 0; minute < 60; minute++) 
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
 _putchar((minute % 10) + '0');
 _putchar('\n');
}
}
}
