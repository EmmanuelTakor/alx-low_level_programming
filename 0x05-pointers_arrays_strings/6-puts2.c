#include "main.h"
#include <stdio.h>
/**
* puts2 - function that prints string
* @str:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

void puts2(char *str)
{
for (; *str != '\0' ; str++)
{putchar(*str); }
putchar('\n'); }
