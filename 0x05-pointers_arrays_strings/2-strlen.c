#include "main.h
/**
 * _strlen - function that return string length
 * @s: string of char 
 * Return: string length
 */
int _strlen(char *s)
{
int slength = 0;
while (*s != '\0')
{
slength++;
s++;
}
return slength;
}
