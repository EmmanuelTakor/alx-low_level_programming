#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* reverse_array - function that prints string
* @a:"This is a parameter"
* @n:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

void reverse_array(int *a, int n)
{int *p, i, aux, k;
p = a;
for (i = 0; i < n; i++)
p++;
for (k = 0; k < i / 2; k++)
{aux = a[k];
a[k] = *p;
*p = aux;
p--;
}}
