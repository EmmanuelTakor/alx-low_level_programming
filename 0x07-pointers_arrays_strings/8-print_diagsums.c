#include <stdio.h>
#include "main.h"
/**
* print_diagsums - print
* @a:"This is a parameter"
* @size:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

void print_diagsums(int *a, int size)
{int index, sum1 = 0, sum2 = 0;
for (index = 0; index < size; index++)
{ sum1 += a[index];
a += size; }
a -= size;
for (index = 0; index < size; index++)
{ sum2 += a[index];
	a -= size;
}
printf("%d, %d\n", sum1, sum2); }
