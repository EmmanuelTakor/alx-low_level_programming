#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: "the program's description"
 * @s: "This is an argument"
 * Return: Always 0 (Success)
 */

/**
 * complete - Prints "_putchar"
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
