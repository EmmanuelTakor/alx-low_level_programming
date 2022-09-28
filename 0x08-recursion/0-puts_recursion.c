#include "main.h"
/**
* _puts_recursion - a recursive function
* @s:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{_putchar('\n');
return; }
_putchar (*s);
_puts_recursion(s + 1); }
