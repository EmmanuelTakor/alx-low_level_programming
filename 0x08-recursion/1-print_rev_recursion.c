#include "main.h"
/**
* _print_rev_recursion - prints string in reverse
* @s:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

void _print_rev_recursion(char *s)
{
if (*s)
_print_rev_recursion(s + 1);
putchar(*s); }
