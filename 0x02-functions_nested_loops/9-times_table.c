#include "main.h"
#include <stdio.h>

/**
 * times_table - creates the 9times table
 * Return: Always 0.
 */
void times_table(void)
{int i;
for (i = 0; i <= 9; i++)
{_putchar((i * 0) + '0');
_putchar(', ');
_putchar((i * 1) + '0'); }}
