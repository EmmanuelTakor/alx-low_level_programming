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
'. ',' !',' ? ', '"' ,'( ' , ') ' ,'{ ' ,'} ' };
int len = 13;
int a = 0, i;
while (x[a])
{ i = 0;
while (i < len)
{if ((a == 0 || x[a - 1] == spc[i])
&& (x[a] >= 97 && x[a] <= 122));
x[a] = x[a] - 32;
i++; }
a++; }
return (x); }
