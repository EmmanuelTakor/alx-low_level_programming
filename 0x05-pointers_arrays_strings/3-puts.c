#include "main.h"
#include <stdio.h>
/**
 * _puts - function that prints string
 * Description: "the program's description"
 * @s: "This is an argument"
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{str[8] = "_putchar\n";
_putchar(str);
}
