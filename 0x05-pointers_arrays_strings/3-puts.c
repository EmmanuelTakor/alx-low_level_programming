#include "main.h"
#include <stdio.h>
/**
* _puts - function that prints string
* @str:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

void _puts(char *str)
{int i;
for (; *str != '\0' ; *str++ )
{putchar(*str);
putchar('\n'); }
}
