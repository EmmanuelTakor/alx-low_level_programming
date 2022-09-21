
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* rev_string - function that prints strings in reverse
* @s:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

void rev_string(char *s)
{char tmp;
int i, length1, length2;

length1 = 0;
length2 = 0;
while (s[length1] != '\0')
length1++;
length2 = length1 - 1;
for (i = 0; i < length1 / 2; i++)
{tmp = s[i];
s[i] = s[length2];
s[length2] = tmp;
length2 -= 1;
} }
