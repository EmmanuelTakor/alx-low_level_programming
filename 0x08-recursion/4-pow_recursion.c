#include "main.h"
/**
* _pow_recursion - returns the value of x raised y
* @x:"This is a parameter"
* @y:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

int _pow_recursion(int x, int y)
{
if (y  < 0)
{
return (-1);
}
else if (y != 0)
return (x * _pow_recursion(x, y - 1));
else
return (1); }
