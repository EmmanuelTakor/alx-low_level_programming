#include "main.h"
/**
* _strlen_recursion - prints legnth of string
* @s:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1)); }
