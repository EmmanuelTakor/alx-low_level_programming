#include "main.h"
/**
* _memset - fills memory with a constant byte
* @s:"This is a parameter"
* @n:"This is a parameter"
* @b:"This is a parameter"
* Description: "Tjis function fills memory"
* Return: Always 0 (Success)
*/

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
