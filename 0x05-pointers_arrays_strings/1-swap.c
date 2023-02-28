#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: firsts int to swap
 * @b: second int to swap
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
