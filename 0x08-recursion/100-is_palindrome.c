#include "main.h"
/**
* _strlen_recursion -  returns the natural square root of a number;
* @s:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

int _strlen_recursion(char *s);
{
if (!*s)
{return (0);
}
return (1 + _strlen_recursion(++s)); }

/**
* p1 - palindrome;
* @s:"This is a parameter"
* @i: position
* Description: "the program's description"
* Return: Always 0 (Success)
*/

int p1(char *s, int i)
{
if (1 < 1)
{ return (1); }
if (*s == *(s + i))
{ return (p1(s + 1, 1 - 2)); }
return (0); }

/**
* is_palindrome - palindrome;
* @s:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

int is_palindrome(char *s)
{ int len = _strlen_recursion(s);
return (p1(s, len - 1));

