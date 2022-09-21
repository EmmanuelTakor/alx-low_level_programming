#include "main.h"
#include <stdio.h>
/**
* puts2 - function that prints string
* @str:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

void puts2(char *str)
{int len, i;
len = strlen(str);
for (i = 0; i < len; i += 2)
{putchar(str[i]); }
putchar('\n'); }
