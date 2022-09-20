#include "main.h"
#include <stdio.h>
/**
* main - Entry point
* Description: "the program's description"
* @s: "This is an argument"
* Return: Always 0 (Success)
*/
int _strlen(char *s)
{int i;
for (i = 0; s[i] != '\0';
++i);
printf("Length of the string: %d", i);
return (0);
}
