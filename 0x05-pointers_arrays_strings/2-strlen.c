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
int c = 0;
while (s[c] != '\0')
c++;
return (c);
}
