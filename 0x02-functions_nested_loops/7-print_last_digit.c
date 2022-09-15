#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Entry point
 * @n:"n is a parameter"
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{int x;
if (n < 0)
n = -n;
x = n % 10;
_putchar(x + '0');
return (n % 10); }
