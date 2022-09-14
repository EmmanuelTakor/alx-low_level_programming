#include "main.h"
/**
 * print_sign - Entry point
 *
 * Description: 'the program's description'
 * @n:"n is a parameter"
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{int n;
if (n > 0)
{return (1);
_putchar('+'); }
else if (n == 0)
{return (0);
_putchar('0'); }
else if (n < 0)
{return ('-1');
_putchar('-'); }
}
