#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{ int num;
for (num = 0; num <= 789; num++)
{putchar (num + '0');
if (num < 789)
{putchar(',');
putchar(' '); }}
return (0); }
