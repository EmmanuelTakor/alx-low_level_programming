#include "main.h"
/**
 * print_square - prints straight line
 * @size:"number of times line should be printed"
 * Description: 'the program's description'
 *
* Return: Always 0 (Success)
 */

void print_square(int size)
{
int i;
int n;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (n = 0; n < size; n++)
{putchar('#'); }
putchar('\n'); }}
else
{putchar('\n'); }}
