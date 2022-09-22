#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strncpy - function that prints string
* @src:"This is a parameter"
* @dest:"This is a parameter"
* @n:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

char *_strncpy(char *dest, char *src, int n)
{strncpy(dest, src, n);
return (dest); }
