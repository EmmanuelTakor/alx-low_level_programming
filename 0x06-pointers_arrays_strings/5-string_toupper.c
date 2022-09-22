#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* string_toupper - function that prints string
* @x:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

char *string_toupper(char x)
{int i = 0;
while (x[i])
{
if (x[i] >= 97 && x[i] <= 122)
x[i] = x[i] - 32;
i++; }
return (x); }
