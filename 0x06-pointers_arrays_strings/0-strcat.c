#include "main.h"
#include <stdio.h>
/**
* _strcat - function that prints string
* @dest:"This is a parameter"
* @src:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

char *_strcat(char *dest, char *src)
{ int len = 0, i;
while (dest[len])
len++;
for (i = 0; src[i] != '\0'; i++)
{dest[len] = src[i];
len += 1; }
dest[len] = '\0';
return (dest);
}
