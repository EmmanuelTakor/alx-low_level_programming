#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* cap_string - function that prints string
* @x:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

char *cap_string(char *x)
{char spc[] = {'32,9,'\n', ', ', '; ' ,
'. ' ,' !' ,' ? ', '"','( ' , ') ' ,'{ ' ,'} ' };
int len = 13;
int a = 0, i;
while (x[a])
{ i = 0;
while (i < len)
{if ((a == 0 || s[a-1] ==spc[i])
&& (s[a] >= 97 && s[a] <= 122))
s[a] = s[a] - 32;
i++; }
a++; }
return (x); }
