#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* puts_half - function that prints half of string
* @str:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

void puts_half(char *str)
{int i, y, x;
x = strlen(str);
if (x % 2 == 1)
y = x / 2 + 1;
else
y = x / 2;
for (i = y; i < x; i++)
{putchar(str[i]); }
putchar('\n'); }
