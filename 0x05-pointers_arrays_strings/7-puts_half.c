#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_rev - function that prints half of string
* @s:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

void print_rev(char *s)
{int i, n;
n = strlen(s) / 2;
for (i = n - 1; i < 0; i++)
{putchar(s[i]); }
putchar('\n'); }
