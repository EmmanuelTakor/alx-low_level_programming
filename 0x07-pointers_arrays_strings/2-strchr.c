#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strchr - Entry point
* @s:"This is a parameter"
* @c:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
int i = 0;
for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]); }
return (0); }
