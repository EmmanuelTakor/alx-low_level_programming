#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _memcpy - a function that copies memory
* @dest:"This is a parameter"
* @src:"This is a parameter"
* @n:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest); }
