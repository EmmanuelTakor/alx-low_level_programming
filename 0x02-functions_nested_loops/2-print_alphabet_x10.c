#include "main.h"

/**
 * void print_alphabet_x10(void) - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{char letter;
int count;
for (count = 0; count < 10; count++)
{
for (letter = 'a'; letter < 'z'; letter++)
{ putchar(letter); }}
putchar('\n');
return (0); }
