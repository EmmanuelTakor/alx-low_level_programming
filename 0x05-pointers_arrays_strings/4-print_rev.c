#include "main.h"
#include <stdio.h>
/**
* print_rev - function that prints string
* @s:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

void print_rev(char *s)
{
for (; *s = '\0' ; s--)
{putchar(*s); }
putchar('\n'); }
