#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strncat - function that prints string
* @src:"This is a parameter"
* @dest:"This is a parameter"
* @n:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

char *_strncat(char *dest, char *src, int n)
{strncat(dest, src, n);
return (dest); }
