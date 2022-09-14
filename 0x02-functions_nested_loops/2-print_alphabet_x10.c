#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets
 * Description: "the program's description"
 * Return: Always 0 (Success)
 */


void print_alphabet_x10(void)
{char letter;
int count;
for (count = 0; count < 10; count++)
{
for (letter = 'a'; letter < 'z'; letter++)
{ _putchar(letter); }
_putchar('\n'); }}
