#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strpbrk - Entry point
* @s:"This is a parameter"
* @accept:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

char *_strpbrk(char *s, char *accept)
{ int b;
while (*s)
{
for (b = 0; accept[b]; b++)
{
if (*s == accept[b])
return (s); }
s++; }
return ('\0'); }
