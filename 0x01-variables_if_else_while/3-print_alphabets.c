#include <ctype.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{char lowerCase;
for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
{ putchar(lowerCase); }
for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
{ putchar(toupper(lowerCase)); }
putchar('\n');
return (0); }
