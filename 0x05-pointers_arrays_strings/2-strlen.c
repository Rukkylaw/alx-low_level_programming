#include "main.h
/**
 * _strlen - function that return string length
 * @s: string of char 
 * Return: string length
 */
int _strlen(char *c)
{
int slength = 0;
while (*c != '\0')
{
slength++;
c++;
}
return slength;
}
