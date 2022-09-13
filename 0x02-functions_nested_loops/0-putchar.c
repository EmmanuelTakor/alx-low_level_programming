#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{char s[] = "_putchar\n";
int i = 0;
while (s[i] != '\n' && s[i] != '\0')
{ putchar(s[i]);
i++; }
return (0); }
