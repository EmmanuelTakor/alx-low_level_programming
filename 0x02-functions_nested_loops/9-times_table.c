#include "main.h"
#include <stdio.h>

/**
 * times_table - creates the 9times table
 * Return: Always 0.
 */
void times_table(void)
{int i;
for (i = 0; i <= 9; i++)
{_putchar((i * 1) + '0');
printf(", ");
_putchar((i * 2) + '0');
printf(", ");
_putchar((i * 3) + '0');
printf(", ");
_putchar((i * 4) + '0');
printf(", ");
_putchar((i * 5) + '0');
printf(", ");
_putchar((i * 6) + '0');
printf(", ");
_putchar((i * 7) + '0');
printf(", ");
_putchar((i * 8) + '0');
printf(", ");
_putchar((i * 9) + '0'); }
_putchar("\n"); }
}
