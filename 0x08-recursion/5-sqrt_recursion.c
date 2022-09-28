#include "main.h"
/**
* _evaluate -  returns the natural square root of a number;
* @n:"This is a parameter"
* @i:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

int _evaluate(int i, int n)
{
if (n == 0 || n == 1)
return (n);

else if (i * i < n)
return (_evaluate(i + 1, n));
else if (i * i == n)
return (i);
return (-1);
return (-1); }

/**
* _sqrt_recursion -  returns the natural square root of a number;
* @n:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/


int _sqrt_recursion(int n)
{
int 1 = 0;
if (i < 0)
return (-1);

else
{
return (_evaluate(i, n)); }}


