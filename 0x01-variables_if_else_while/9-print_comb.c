#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int num;
for (num = 0; num < 10; num++)
{printf("%d", num);
if (num < 9)
{printf(", "); }}
printf("\n");
return (0); }
