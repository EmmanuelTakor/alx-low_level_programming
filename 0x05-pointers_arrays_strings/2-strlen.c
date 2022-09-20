#include "main.h"
#include <stdio.h>
/**
* _strlen - returns lengths of strings
* Description: "the program's description"
* @s: "This is an argument"
* Return: Always 0 (Success)
*/
int _strlen(char *s)
{char *x = "Hello World";
char *s = &x;
int i;
for (i = 0;
*s != '\0';
++i)
_putchar(i);
return (0);
}
