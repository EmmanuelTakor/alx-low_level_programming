#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);

int main(void)
{
char letter;
print_alphabet();
putchar('\n');
return (0); }

/**
 * print_alphabet - Prints alphabets
 * Description: "the program's description"
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{char letter;
for (letter = 0; letter < 'z'; letter++)
{putchar(letter); } }
