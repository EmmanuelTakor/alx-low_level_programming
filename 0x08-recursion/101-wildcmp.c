#include "main.h"
/**
* wildcmp - returns the natural square root of a number
* @s1:"This is a parameter"
* @s2:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 != '\0' && *s2 == '*')
{ return (wildcmp(s1, s2 + 1)); }
return (*s2 == '\0'); }
if (*s2 == '*')
{
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1)); }
else if (*s1 == *s2)
{return (wildcmp(s1 + 1, s2 + 1)); }
return (0); }
