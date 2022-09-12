#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{ char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{ if
(alphabet != 'e' && alphabet != 'q')
{ putchar(alphabet); }
else
{ alphabet++;
alphabet--; } }
putchar('\n');
return (0); }
