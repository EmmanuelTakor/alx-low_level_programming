
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_rev - function that prints string
* @s:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

void rev_string(char *s)
{int i, n;
n = strlen(s);
for (i = n - 1; i >= 0; i--)
{putchar(s[i]); } }
~                
