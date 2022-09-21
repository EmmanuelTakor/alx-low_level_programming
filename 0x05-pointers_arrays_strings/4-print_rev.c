#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_rev - function that prints string
* @s:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

void print_rev(char *s)
{int i, n;
s = "hello";
n = strlen(s);
for (i = n-1; i >= 0; i--)
{_putchar(s[i]); } }
