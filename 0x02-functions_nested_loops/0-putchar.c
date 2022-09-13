#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * complete - function used to evaluate
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
/**
 * complete - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
void complete(char *s);
int main(void)
{char s[] = "_putchar\n";
complete(s);
return (0);

}
void complete(char *s)
{ int i = 0;
while (s[i] != '\n' && s[i] != '\0')
{ putchar (s[i]);
i++; }
putchar('\n'); }
