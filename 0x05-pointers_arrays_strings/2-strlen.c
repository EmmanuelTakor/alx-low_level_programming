#include "main.h"
#include <stdio.h>
/**
* _strlen - returns lengths of strings
* Description: "the program's description"
* @s: "This is an argument"
* Return: Always 0 (Success)
*/
int _strlen(char *s)
{
int i;
for (;
*s != '\0'; s++)
{i++;
_putchar(i); }
return (i);
}
